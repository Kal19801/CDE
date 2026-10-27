#!/bin/bash
# r26_iter.sh - SIMD 波迭代收敛驱动（前台分轮，教训 au：不用 nohup）
# 每轮: assemble(SWEEP_ERRMAP=上轮raw) → iso(ISO_RAWERRS=新raw) → 报告 ok 数
set -u
REPO=/home/z/my-project/repo/CDE-decomp
W=/tmp/my-project/work
cd "$REPO"
PREV=$W/iso_rawerrs_r26b.tsv
for i in 3 4 5 6; do
  echo "=== ROUND $i ==="
  SWEEP_BATCH=sweep18 SWEEP_TU=/tmp/sweep_tu_sweep18 SWEEP_DUMP_SECS=1 \
    SWEEP_ERRMAP=$PREV \
    timeout 560 python3 scripts/sweep_assemble.py > $W/asm_r26_$i.log 2>&1
  RC=$?
  tail -1 $W/asm_r26_$i.log
  [ $RC -ne 0 ] && { echo "ASSEMBLE FAILED rc=$RC"; break; }
  SWEEP_BATCH=sweep18 ISO_RAWERRS=$W/iso_rawerrs_r26$i.tsv \
    timeout 560 python3 scripts/iso_sweep.py > $W/iso_r26_$i.log 2>&1
  OK=$(grep -o "ok=[0-9]*" $W/iso_r26_$i.log | tail -1)
  echo "round $i: $OK"
  PREV=$W/iso_rawerrs_r26$i.tsv
done
echo "=== FINAL ==="
tail -1 $W/iso_r26_$i.log 2>/dev/null
