#!/bin/bash
# sweep_iter.sh - 扫荡批次迭代收敛（r19，前台分块可续跑——教训 au）
# 用法: sweep_iter.sh <batch> <tu_dir> [rounds] [resume]
#   batch  sweep01...
#   resume 任一非空值 = 续跑（保留 defer 文件与 autodefer，跳过首轮组装）
set -u
BATCH=$1; TUD=$2; ROUNDS=${3:-3}; RESUME=${4:-}
REPO=/home/z/my-project/repo/CDE-decomp
TC=$REPO/toolchain/usr/lib/llvm-19/bin/clang
FLAGS="--target=i686-w64-mingw32 -m32 -x c -std=gnu11 -c -O2 -g -gcodeview -ferror-limit=0 -w -Wno-error=implicit-function-declaration -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-error=int-conversion -Isrc -Isrc/../third_party/GL -Isrc/../third_party/AL -Isrc/../third_party/glfw-3.3.10/include -Ipe_inc -Ipe_inc/freetype2 -isystem $REPO/toolchain/usr/i686-w64-mingw32/include"
NUM=$((40 + 10#${BATCH#sweep}))
PILOT=$REPO/src/pilot_${NUM}_${BATCH}.c
DRAFT=/tmp/sweep_${BATCH}_draft.c
ERRS=/tmp/sweep_${BATCH}_errs.txt
DEFF=/tmp/sweep_${BATCH}_defer.txt
export SWEEP_TU=$TUD SWEEP_DRAFT=$DRAFT SWEEP_CALLS=/tmp/sweep_calls.json SWEEP_BATCH=$BATCH

if [ -z "$RESUME" ]; then
  rm -f "$DEFF" "$DRAFT.autodefer"
  python3 $REPO/scripts/sweep_assemble.py 2>/tmp/sweep_${BATCH}_asm.log | tail -1
fi

for i in $(seq 1 "$ROUNDS"); do
  cp "$DRAFT" "$PILOT"
  "$TC" $FLAGS "$PILOT" -o /tmp/sweep_${BATCH}.o 2>&1 | grep "error:" > "$ERRS" || true
  N=$(wc -l < "$ERRS")
  echo "round $i: $N"
  if [ "$N" -eq 0 ]; then
    echo "CONVERGED $BATCH"
    break
  fi
  python3 $REPO/scripts/sweep_defer.py "$ERRS" "$DEFF" "$PILOT" 2>/dev/null | tail -1
  export SWEEP_DEFER=$(cat "$DEFF" 2>/dev/null || echo "")
  python3 $REPO/scripts/sweep_assemble.py 2>/dev/null | tail -1
done

if [ "$N" = "0" ]; then
  # 独立复核（教训 am：锚定 rc + obj + 错误数三方一致）
  cp "$DRAFT" "$PILOT"
  "$TC" $FLAGS "$PILOT" -o /tmp/sweep_${BATCH}_verify.o 2>/tmp/sweep_${BATCH}_verify.log
  RC=$?
  E=$(grep -c "error:" /tmp/sweep_${BATCH}_verify.log || true)
  echo "VERIFY rc=$RC errs=$E obj=$(stat -c%s /tmp/sweep_${BATCH}_verify.o 2>/dev/null || echo NONE)"
fi
