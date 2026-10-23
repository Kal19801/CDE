# CDE Decomp — Children of a Dead Earth 逆向重建

对 **Children of a Dead Earth**（Steam，Q Switched Productions, LLC 开发）的
32 位 x86 原生引擎进行源码级逆向重建的研究项目。目标是从官方 `CDE.exe`
（PE32，自研 C++ 引擎，OpenGL + OpenAL）与其随包 `CDE.pdb` 出发，重建出
可编译、可验证、与原版行为语义一致的 C 源码。

> **本仓库不含任何游戏资源**（贴图 / 模型 / 音频 / 关卡数据 / 可执行文件）。
> 游玩请支持正版：**https://store.steampowered.com/app/476530/Children_of_a_Dead_Earth/**

---

## 当前状态（诚实版）

| 指标 | 数值 |
|---|---|
| 游戏函数总数（PDB S_GPROC32） | 23,751 |
| 已真实反编译实现（31 个编译单元） | 10,421 处地址覆盖，均值 BSim 相似度 0.716 |
| 占位桩（未实现，`ret` 体） | ~11,000（由 `pdb/functions.tsv` 驱动生成） |
| BSim 名字联接率 | 18,785 / 18,931 = **99.23%** |
| 联接对中 sim ≥ 0.99 | 2,406；sim = 1.0 共 1,273 |
| 编译状态 | 31 TU + 全链接 **clang = 0 错误** |
| 与基线 exe 的 .text 字节一致性 | 4,872,704 字节中差 290（99.994%，见下） |

**重要澄清**：`99.23%` 联接率度量的是**符号名字覆盖**，不是实现覆盖。
本项目距离"源码完全还原"的差距 = 约 1.1 万个占位桩函数的批量实现
（详见 [ROADMAP.md](ROADMAP.md)）。

**关于 .text 的 290 字节残差**：全部 67 处差异均为间接调用站点
（`call [__imp__*]`）的操作数偏移 —— lld-link 将导入槽（导入库 IAT 与
自产零槽混排）的**排放顺序**与当年参照链接不同，导致同一站点编码的槽
地址错位 ±12B；指令与代码字节本身完全一致。见 `tools/fix_imp_order.py`
（含恢复工具与说明）。

---

## 证据链

1. **确定性重建**：同一份源码 + 同一工具链 → 每次构建产物逐字节一致
   （仅 .rdata 中链接时间戳 / PDB GUID 不可避免地变化）。
2. **BSim 函数等价性**：Ghidra 11.3.2 H2 库对原版 exe 与重建 exe 做函数
   签名比对，同名联接 + 余弦相似度打分。完整管线配方见
   [docs/pipeline.md](docs/pipeline.md)，报告快照见 `reports/`。
3. **零漂移编译**：31 个编译单元 + 支持对象在 clang 19.1.7 下 0 错误 0 警告
   （`-w` 抑制显示，错误计数为 0）。

## 仓库结构

```
├── build.py              # 一键构建入口（编译→桩生成→链接收敛→PE 头对齐）
├── Makefile              # make / make toolchain / make clean
├── src/                  # 重建源码：31 个 game_*.c + 完整头文件链
│   ├── game_000.c ... game_030.c   # 反编译重建的游戏逻辑（~10.4k 函数）
│   ├── cde_types_*.h     # 从 PDB 类型流重建的类型系统（337 个精确布局）
│   └── port_prelude.h    # 预lude（调用约定/指针模型/平台守卫）
├── pdb/functions.tsv     # 原版 PDB 函数清单（桩生成依据，符号事实数据）
├── pe_inc/ pe_lib/ pe_res/ third_party/   # 构建依赖（头文件/导入库/资源脚本）
├── tools/
│   ├── pe_gen_stubs.py   # v3 占位桩生成器（covered-VA 对账）
│   ├── fix_imp_order.py  # 导入槽顺序恢复工具（290B 残差说明）
│   ├── pe_cmp.py         # PE 逐节字节比对
│   └── ghidra/           # BSim 管线脚本（导入→签名→对账→报告）
├── scripts/pe_toolchain_setup.sh   # 工具链引导（no-root 私有前缀）
├── reports/              # BSim 等价性报告快照（v16/v17 + 审计 TSV）
└── docs/                 # 管线配方 / 状态快照 / 教训精编
```

## 构建指南

宿主要求：**x86_64 Linux**（Debian 13 / Ubuntu 24.04 级别均可），需联网
（首次下载工具链 deb 包）。无 root 也可构建。

```bash
# 1) 交叉工具链（clang-19 + lld-19 + llvm-19 + mingw-w64 i686 → ./toolchain）
bash scripts/pe_toolchain_setup.sh          # 有 root/已有依赖也可 SKIP_JDK=1 提速

# 2) 全量构建（编译 31 TU + 生成占位桩 + 链接收敛）
python3 build.py                            # 或: make
#   分步: python3 build.py tus|stubs|link   # 适配低配机器分段执行

# 3) 产物
#   pe_out/CDE_recomp.exe  (6.7MB, PE32 i386, 与原版同 ImageBase/节布局)
#   pe_out/CDE_recomp.pdb  (CodeView 调试信息)

# 4) 与参照 exe 逐节比对（可选）
python3 tools/pe_cmp.py <参照.exe> pe_out/CDE_recomp.exe
```

要点：
- 编译旗标中的 `-ftrivial-auto-var-init=pattern` 与 6 个 TU 的
  `-mllvm -enable-tail-merge=false` 是**语义必需**（见 docs/lessons.md
  教训 70/74：未初始化伪栈读会被 LLVM UB 折叠成空函数；尾合并会破坏
  与原版一致的控制流形状）。
- 链接采用 8 轮未定义符号收敛（每轮 FRESH 重生成桩闭包）。
- 构建产物需要**原版游戏**的资源目录才能运行（本仓库不提供）。

## 许可与免责

见 [DISCLAIMER.md](DISCLAIMER.md)。简言之：研究用途；不含游戏资产；
需要拥有正版；与原开发者无关联；权利人可要求下架。

## 致谢

- [Q Switched Productions, LLC](https://store.steampowered.com/developer/QSwitchedProductions)（Zane Mankowski）—— 独立开发了这款
  迄今最严谨的硬科幻太空战争模拟器，购买是最好的支持。
- Ghidra（NSA）+ BSim —— 本项目等价性验证的基石。
