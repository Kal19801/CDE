#!/bin/bash
# fam8_drive.sh - fam8 defer 收敛后台驱动（防假收敛：末轮 0 错后独立复核锚定 rc）
# 用法: nohup bash fam8_drive.sh > /tmp/fam8_drive.log 2>&1 &
set -u
MAXLOOPS=${1:-80}
START=$(date +%s)
BUDGET=${2:-28800}   # 8h 硬顶

for j in $(seq 1 "$MAXLOOPS"); do
  NOW=$(date +%s); [ $((NOW-START)) -gt "$BUDGET" ] && { echo "TIME BUDGET EXCEEDED"; exit 2; }
  OUT=$(timeout 560 bash /home/z/my-project/scripts/fam8_iter.sh /tmp/errs_fam8_last.txt 5 /tmp/fam8_defer.txt 2>&1 | grep -E "^(base|iter)")
  echo "== loop $j [$(date +%H:%M:%S)]: $(echo "$OUT" | tr '\n' ' ')"
  LAST=$(echo "$OUT" | tail -1 | awk '{print $NF}')
  if [ "$LAST" = "0" ]; then
    cd /home/z/my-project/repo/CDE-decomp
    TC=toolchain/usr/lib/llvm-19/bin/clang
    FLAGS="--target=i686-w64-mingw32 -m32 -x c -std=gnu11 -c -O2 -g -gcodeview -ferror-limit=0 -w -Wno-error=implicit-function-declaration -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-error=int-conversion -Isrc -Isrc/../third_party/GL -Isrc/../third_party/AL -Isrc/../third_party/glfw-3.3.10/include -Ipe_inc -Ipe_inc/freetype2 -isystem /home/z/my-project/repo/CDE-decomp/toolchain/usr/i686-w64-mingw32/include"
    timeout 300 "$TC" $FLAGS src/pilot_040_fam8.c -o /tmp/p040.o 2>/tmp/fam8_verify_errs.txt
    RC=$?
    E=$(grep -c "error:" /tmp/fam8_verify_errs.txt || true)
    OSZ=$(stat -c%s /tmp/p040.o 2>/dev/null || echo NONE)
    echo "VERIFY rc=$RC errs=$E obj=$OSZ"
    [ "$RC" = "0" ] && [ "$E" = "0" ] && echo "REAL_ZERO" && exit 0
  fi
done
echo "NOT CONVERGED after $MAXLOOPS loops"
exit 1
