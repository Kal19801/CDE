#!/bin/bash
# r27_iter.sh - 战役②首波(字符串定址+常量切片)迭代收敛驱动（前台分轮）
# 每轮: assemble(SWEEP_ERRMAP=上轮raw) → iso(ISO_RAWERRS=新raw) → 报告 ok 数
set -u
REPO=/home/z/my-project/repo/CDE-decomp
W=/tmp/my-project/work
cd "$REPO"
PREV=$W/iso_rawerrs_r26_M4.tsv
for i in 1 2 3 4; do
  echo "=== ROUND $i ==="
  SWEEP_BATCH=sweep18 SWEEP_TU=/tmp/sweep_tu_sweep18 SWEEP_DUMP_SECS=1 \
    SWEEP_ERRMAP=$PREV \
    timeout 560 python3 scripts/sweep_assemble.py > $W/asm_r27_$i.log 2>&1
  RC=$?
  tail -1 $W/asm_r27_$i.log
  [ $RC -ne 0 ] && { echo "ASSEMBLE FAILED rc=$RC"; tail -20 $W/asm_r27_$i.log; break; }
  SWEEP_BATCH=sweep18 ISO_RAWERRS=$W/iso_rawerrs_r27_$i.tsv \
    timeout 560 python3 scripts/iso_sweep.py > $W/iso_r27_$i.log 2>&1
  RC2=$?
  OK=$(grep -o "ok=[0-9]*" $W/iso_r27_$i.log | tail -1)
  echo "round $i: $OK (iso rc=$RC2)"
  [ $RC2 -ne 0 ] && { echo "ISO FAILED rc=$RC2"; tail -20 $W/iso_r27_$i.log; break; }
  PREV=$W/iso_rawerrs_r27_$i.tsv
done
echo "=== FINAL ==="
grep -o "ok=[0-9]*" $W/iso_r27_$i.log 2>/dev/null | tail -1
