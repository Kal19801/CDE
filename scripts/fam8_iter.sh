#!/bin/bash
# fam8_iter.sh - fam8 批次编译迭代（含迭代 defer 收敛）
# 用法: fam8_iter.sh [错误文件] [轮数] [defer文件]
set -u
cd /home/z/my-project/repo/CDE-decomp
export REPO=/home/z/my-project/repo/CDE-decomp
export TC=/home/z/my-project/repo/CDE-decomp/toolchain/usr/lib/llvm-19/bin/clang
export FLAGS="--target=i686-w64-mingw32 -m32 -x c -std=gnu11 -c -O2 -g -gcodeview -ferror-limit=0 -w -Wno-error=implicit-function-declaration -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-error=int-conversion -Isrc -Isrc/../third_party/GL -Isrc/../third_party/AL -Isrc/../third_party/glfw-3.3.10/include -Ipe_inc -Ipe_inc/freetype2 -isystem /home/z/my-project/repo/CDE-decomp/toolchain/usr/i686-w64-mingw32/include"
ERRS=${1:-/tmp/errs_fam8_last.txt}
ROUNDS=${2:-3}
DEFER_F=${3:-/tmp/fam8_defer.txt}

cp /tmp/pilot040_draft.c "$REPO/src/pilot_040_fam8.c"
sed -i 's/Physics:://g; s/Darray_L_struct_CelestialBody_P__G_/Darray_L_struct_CelestialBody_P_G_/g' "$REPO/src/pilot_040_fam8.c"

"$TC" $FLAGS "$REPO/src/pilot_040_fam8.c" -o /tmp/p040.o 2>&1 | grep "error:" > "$ERRS" || true
N=$(wc -l < "$ERRS")
echo "base: $N"

for i in $(seq 1 "$ROUNDS"); do
  [ "$N" -eq 0 ] && break
  # 迭代 defer 收敛（教训 h）：错误按函数归因 -> DEFER -> 重组装 -> 重编译
  python3 /home/z/my-project/scripts/fam8_defer.py "$ERRS" "$DEFER_F" 2>/dev/null | tail -2
  export FAM8_DEFER=$(cat "$DEFER_F" 2>/dev/null || echo "")
  rm -f "$REPO/src/pilot_040_fam8.c"
  python3 /home/z/my-project/scripts/fam8_assemble.py 2>/dev/null | tail -1
  cp /tmp/pilot040_draft.c "$REPO/src/pilot_040_fam8.c"
  sed -i 's/Physics:://g; s/Darray_L_struct_CelestialBody_P__G_/Darray_L_struct_CelestialBody_P_G_/g' "$REPO/src/pilot_040_fam8.c"
  "$TC" $FLAGS "$REPO/src/pilot_040_fam8.c" -o /tmp/p040.o 2>&1 | grep "error:" > "$ERRS" || true
  N=$(wc -l < "$ERRS")
  echo "iter $i: $N"
done
ls -la /tmp/p040.o 2>/dev/null || echo "NO OBJ - compile failed"
