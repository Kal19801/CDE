#!/bin/bash
# sweep_decomp.sh - 批次反编译链：BatchDecomp + decomp2c（r19）
# 用法: sweep_decomp.sh <batch>   （TSV 在 /tmp/sweep_chunks/<batch>.tsv）
set -eu
BATCH=$1
REPO=/home/z/my-project/repo/CDE-decomp
GH=/tmp/my-project/tools/ghidra_11.3.2_PUBLIC/support/analyzeHeadless
DC=/tmp/sweep_dc_$BATCH
TU=/tmp/sweep_tu_$BATCH
rm -rf "$DC" "$TU"; mkdir -p "$DC" "$TU"
timeout 560 $GH /tmp/my-project/ghidra_proj CDEproj -process CDE.exe -noanalysis \
  -scriptPath $REPO/tools/ghidra/ghidra_scripts \
  -postScript BatchDecomp.java /tmp/sweep_chunks/$BATCH.tsv "$DC" 2>&1 \
  | rg -c "BatchDecomp" || true
echo "decompiled: $(ls $DC | wc -l) / $(grep -cv '^#' /tmp/sweep_chunks/$BATCH.tsv)"
python3 $REPO/tools/decomp2c.py "$DC" "$TU" 2>&1 | tail -2
