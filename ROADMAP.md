# ROADMAP — 工作路线

## 已完成 ✅

- **类型系统全清**：从 PDB 类型流 + Ghidra 数据库重建 817 个结构体 /
  337 个与原版精确匹配的布局（llvm-pdbutil + clang -fdump-record-layouts
  双向审计），模板实例（Maybe/Delegate/WeakPtr 家族等 147+）忠实重建。
- **31 个编译单元 clang = 0**：3537 → 0 错误的全清零战役
  （参数重定型、sret/thiscall ABI 修复、伪栈 pun 等教训见 docs/lessons.md）。
- **PE 对照构建**：与原版同 ImageBase（0x400000）、同节布局、同 .rsrc
  尺寸（741,376B）、同导入表拓扑（22 DLL 212 函数）；链接器版本字节 /
  时间戳对齐。
- **BSim 等价性管线**：名字联接 18,785/18,931 = 99.23%；真实实现函数
  10,281 个（mean 0.716，ge99 2,406）；签名层修复（FixSig mode A/B/C）
  与确定性复现（两轮全链重建分毫不差）。
- **诚实审计**：字节级裁决澄清 ".text 零字节差" 是重建确定性而非与
  原版等同；联接率度量名字覆盖而非实现覆盖。

## 进行中 🚧 — 占位桩批量实现（核心主线）

约 **11,000 个占位桩**（`tools/pe_gen_stubs.py` 按 `pdb/functions.tsv`
对账自动生成的 `ret` 体）等待反编译实现。路线：

1. **工业化管线原型**（当前阶段）：选中等规模函数族（如
   ArcLampPumpSubModule 的 getter 群）端到端打通
   `Ghidra 反编译 → C 清洗 → 编译 → BSim 验证` 自动闭环，实测单函数
   工时并校准总时间表。
2. **逐族推进**：按调用图聚类分族实现；每族合入前跑 equiv 报告确保
   相似度不回退（当前基线：mean 0.4637 / ge99 2,406）。
3. **收尾专项**：Line2/Line3 54 函数 asm 级重建；notrep 146 清点；
   exit99 残余 268 对逐族归因。

## 计划 📋

- **完全还原判定标准**：实现覆盖率 100%（占位桩清零）+ 全部真实实现
  函数 BSim sim ≥ 0.95 + 等价性报告全绿。
- **Android arm64-v8a 移植（独立分支）**：主分支保持 32 位忠实重建，
  完全还原后开 `android-arm64` 分支：
  - ptr32 指针模型抽象（原始二进制 32 位指针语义 → 64 位宿主）
  - 平台层：Win32/OpenGL → SDL2 + GLES 3（`src/main.c` /
    `port_ops.c` 骨架已就位）
  - OpenAL → OpenAL Soft（跨平台已验证）；freetype/libsndfile 原生移植
  - 资源管线：GLSL desktop → GLES 着色器转译

## 里程碑判定

| 里程碑 | 判据 | 状态 |
|---|---|---|
| M1 类型系统 | 337 布局精确匹配 | ✅ |
| M2 编译清零 | 31 TU clang=0 | ✅ |
| M3 PE 对照 | 确定性重建 + BSim 联接 99%+ | ✅ |
| M4 实现补全 | 占位桩 → 0；sim≥0.95 全绿 | 🚧 |
| M5 移植 | arm64 APK 可玩 | 📋 |
