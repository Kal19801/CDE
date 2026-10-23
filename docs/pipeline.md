# BSim 等价性验证管线（重建配方）

本文记录从零复现"原版 CDE.exe vs 重建 CDE_recomp.exe"函数等价性报告的
完整流程。工具：Ghidra 11.3.2（headless）+ H2 BSim 库 + `tools/ghidra/`
下的脚本。全程前台分窗执行（无后台进程）。

## 0. 环境要点（踩坑浓缩）

- `analyzeHeadless` 的 `launch.sh` 需打 JDK fallback 补丁（Debian 四段
  版本号让 LaunchSupport 误判；fallback 必须放在 `-save` 之后并无条件
  按 java 可执行性归一化返回码）。
- 脚本一律放 `Ghidra/Features/BSim/ghidra_scripts/` 内绝对路径调用；
  OSGi 缓存污染（ClassNotFoundException）→ 删
  `~/.config/ghidra/11.3.2/osgi/`。
- 原 CDE.exe 导入时带同目录 CDE.pdb 自动加载；重建 exe 导入用**无 pdb
  临时副本**（坏复合类型会毒化签名期）。

## 1. 程序导入与分析

```
REC 侧: import (无 pdb) → 首轮分析 → ForceCreateFuncs(全量 PDB 清单建函数,
        含 FUN_ 桩名) → ApplyPdbNames → DeThunk → 二轮 ForceCreateFuncs(made=0 稳定)
        → ApplyPdbTypes(applyNoAnalysisState 单体方法, 12s)
        → ResetSig(Cannot-assign 族) → 二轮分析
ORIG 侧: import (带 pdb) → 首轮分析 → 二轮分析(-process 不带 -noanalysis,
        否则缺 547 函数) → 审计 21,443/named 13,343
```

⚠️ 建库后严禁再跑 AnalyzeAll（会吸收 725 个新建函数）。

## 2. 签名入库与重签

- `ScanAllSigs.java`：照官方 AddProgramToH2BSimDatabaseScript 克隆的
  全迭代签名扫描（绕开 CLI generatesigs 的默认丢弃）。
- 同名 exe 多条目会 "Could not determine unique executable" —— 重签前
  必须 `bsim delete` 旧 md5 并 `listexes` 核对。
- H2 库：medium_32 特征；双方 `--commit` 入库。

## 3. 签名层对账与修复

- `SigDump.java`：`SIG|` 格式导出双方签名。
- `p82_sigaudit.py`：rec vs orig 按地址联接，对账 conv/参数数/返回类型
  → `/tmp/sig_audit.tsv`。注意：输出在管道尾部，勿用 head 截断（SIGPIPE）。
- `p82_genfix.py`：生成 FixSig 清单——
  - mode A：删 dup-this（rnp==onp+1 且 thiscall 且返回形态一致）
  - mode B：按值提升（rnp==onp+2 且 orig 按值返回 rec 指针返回）
  - mode C：cdecl→thiscall（ret 归一化安全过滤；对 BSim 零分收益但
    源级保真，保留）
- `FixSig2.py`：落地修复。经验：conv 形态不影响 BSim 特征向量；
  mode A/B 有效是因为真的增删了参数结构。

## 4. 等价性报告

- `CdeEquiv4.py`：dumpsigs XML + restoreXml 纯数据路线（绕开工程锁），
  余弦全向量比对，同名联接（`::<->__` 归一化、模板名、`__oN` 剥离、
  `::__l2::` 尾段切分、FUN_ 身份、rec2orig 前缀联接）。
- 报告分层：ALL / DISTINCTIVE（selfsig≥15）/ fun_identity。
- 桩体诚实审计：`p83_bytecheck.py` 按 rec 函数体首字节分类联接对
  （real_code / ret_only / jmp_forward / pad）。

## 5. 报告基线（equiv17）

joined 18,785 / notrep 146 / 99.23% / mean 0.4637 / ge99 2,407 /
eq1.0 1,273 / fun_identity 7,899。快照见 `reports/`。
