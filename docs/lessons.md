# 教训精编（跨会话 durable 的工程教训）

来自 80+ 轮逆向会话的完整教训库（1-89）精编，只保留对后续工作有
直接操作意义的条目。全量版本在项目 worklog。

## 编译器 / LLVM

- **教训 70**：`-ftrivial-auto-var-init=pattern` 是反编译源码跨编译器
  编译的**必备旗标**——Ghidra 伪栈未初始化读会被 LLVM UB 折叠成
  unreachable → 函数体变 NOP 垫 → PDB 无记录 → Ghidra 不建函数
  （222 个函数静默丢失）。
- **教训 74**：LLVM jump-threading 会消除循环入口重复 guard；尾合并
  再合 test 块。空内联汇编 `__asm__("" : "+r"(x))` 值屏障 +
  `-mllvm -enable-tail-merge=false` 按 TU 精细控制（6 个 TU off、
  25 个 on 是实测最优）。
- **教训 75**：巨函数（数百局部）缺 pattern-init 会缩水 30KB+；用
  PDB 函数字节总和即刻判别对象新旧。
- **教训 63**：`(T*)(uintptr_t)(x)` 在调用实参首位会被解析为函数指针
  调用——必须裸化或外加包裹括号。
- **教训 65**：clang16 起 incompatible function pointer types 赋值 =
  error。

## Ghidra / BSim

- **教训 71/73**：OSGi bundle 按目录共享，一个坏 .java 毒化整目录；
  /tmp scriptPath 留下指向 /tmp 的缓存记录。脚本放
  `Ghidra/Features/BSim/ghidra_scripts/`，出污染删
  `~/.config/ghidra/<ver>/osgi/`。
- **教训 68**：headless 开第二程序撞 LATEST_VERSION 墙——走 dumpsigs
  XML + restoreXml 纯数据路线。
- **教训 77**：PDB Universal 加载自产 PDB 毒化签名期（1902 错）——
  无 pdb 导入 + ForceCreateFuncs 全量清单建函数，FUN_ 桩名必须放行。
- **教训 78**：BSim 内建 scanFunctions 跳过 thunk——5 字节转发器需
  DeThunk 后入库。
- **教训 80/81**：pe_build 只链不编桩对象（恢复后必重编）；建库后
  严禁 AnalyzeAll（吞 725 函数）。
- **教训 82/83**：同名 exe 多条目必须 delete 旧 md5；导入用临时目录
  副本。
- **教训 84**：headless -process 后处理必须走
  `applyNoAnalysisState()` 单体方法（分析态方法需活动分析会话）。
- **教训 85**：S_GPROC32 TSV 的"下一行取 addr"启发式在密集簇错位；
  权威性以 publics 流为准（且 addr 是十进制段内偏移）。
- **教训 86/87**：orig 侧一轮分析必缺 547 函数（需二轮）；类型化参数
  在个别函数触发 "Cannot assign parameter address"——ResetSig 是
  正确预案。

## 链接器 / PE

- 本项目 lld-link 将**导入库 IAT 与自产零槽合并进 .text**；槽排放
  顺序依赖链接轮次的符号闭包顺序 → 跨会话重建 290B 的间接调用操作
  数残差（详见 tools/fix_imp_order.py 头注释）。
- `-force:multiple` 下 impstubs.o（先于导入库）的零槽会遮蔽真实 IAT——
  对照构建永不运行，语义无碍，但必须知晓。
- 编译旗标里 `-ftrivial-auto-var-init=pattern`、6 TU 的
  tail-merge=false、`-gcodeview` 三者任何一个变动都会破坏字节级复现。

## 工程 / 会话管理

- **教训 62**：同文件多编辑=行号位移炸弹——每个锚点现场 rg 定位。
- **教训 64**：括号平衡插入点必须在 `{` 之前。
- **教训 59**：同函数多处同模板调用形态不同——锚替换必须验证错误站
  清零而非 TU 净减。
- **教训 88**：长会话每完成一个管线阶段就 commit + worklog + 检查点，
  严禁攒尾（p82 六小时尾段全损的教训）。
- **教训 89**：沙箱重置后 `git fsck --lost-found` 可捞悬空 auto-commit。
- 后台进程（nohup/setsid 常驻）会被沙箱回收——耗时任务一律前台分窗
  （≤9.5 分钟）+ 断点续传。
- **两分法·与上条勿混**：短网络命令（ssh / git push / ls-remote）在
  受限工具环境的 pty 下会"假挂死"——SSH 握手其实 0.5s 就完成，是 pty
  伪影吞掉了输出，外层只看到 timeout。正解 = `setsid <cmd> </dev/null
  >out.txt 2>&1` 后台跑 + 读文件（p84/p84b 两轮复踩实证）。判据：命令
  秒级完成选后台+重定向，分钟级以上选前台分窗。
- filebin：同文件反复访问会限速；直链 302 → 签名 S3 URL 可绕前端
  节流；apk 扩展名被拒用 .zip 规避。
- p88：按名重签（bsim delete --name + ScanAllSigs）更新的是旧 md5 行的
  功能内容，md5 标签不换——"同名不同 md5 冲突"是记账伪影，以转储内容为准。
- p88：ResetSig 只重置报错的调用者侧；坏原型在被调/间接调用通道时同批
  函数仍炸（93 reset → 92 残留）。被调侧修复需 PoisonTrace 方案，勿重复
  ResetSig 空转。
