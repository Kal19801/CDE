#!/bin/bash
# r27_pipeline_rebuild.sh - /tmp 中间产物全重建（r27 环境恢复后）
# 步骤: r25_dec 合并 → decomp2c → covered 过滤 → calls.json → 组装(secs+prelude, M4 累积图)
set -e
REPO=/home/z/my-project/repo/CDE-decomp
WORK=/tmp/my-project/work
cd "$REPO"

echo "=== [1/5] 合并 r25_dec chunks -> /tmp/r25_dec_all"
rm -rf /tmp/r25_dec_all
mkdir -p /tmp/r25_dec_all
for c in "$WORK"/r25_dec/chunk*/; do
  cp "$c"*.c /tmp/r25_dec_all/ 2>/dev/null || true
done
echo "merged: $(ls /tmp/r25_dec_all | wc -l) files"

echo "=== [2/5] decomp2c -> /tmp/sweep_tu_sweep18"
rm -rf /tmp/sweep_tu_sweep18
mkdir -p /tmp/sweep_tu_sweep18
python3 tools/decomp2c.py /tmp/r25_dec_all /tmp/sweep_tu_sweep18 2>&1 | tail -3

echo "=== [3/5] 过滤已覆盖 TU"
export SWEEP_TU=/tmp/sweep_tu_sweep18
python3 /tmp/my-project/scripts/r25_filter_tus.py

echo "=== [4/5] calls.json 重建 (objdump 原版 exe)"
if [ -f /tmp/orig/CDE.exe ]; then
  export CDE_ORIG_EXE=/tmp/orig/CDE.exe
else
  export CDE_ORIG_EXE=/tmp/my-project/orig_backup/CDE.exe
fi
mkdir -p /tmp/orig
[ -f /tmp/orig/CDE.exe ] || cp "$CDE_ORIG_EXE" /tmp/orig/CDE.exe
export SWEEP_CALLS=/tmp/sweep_calls.json
python3 scripts/sweep_callsites.py 2>&1 | tail -2

echo "=== [5/5] sweep_assemble (SWEEP_DUMP_SECS + M4 累积图)"
export SWEEP_BATCH=sweep18
export SWEEP_DRAFT=/tmp/sweep_sweep18_draft.c
export SWEEP_ERRMAP=$WORK/iso_rawerrs_r26_M4.tsv
export SWEEP_DUMP_SECS=1
python3 scripts/sweep_assemble.py 2>&1 | tail -3
ls /tmp/sweep_sweep18_secs | wc -l
ls -la /tmp/sweep_sweep18_draft.c.prelude
echo "PIPELINE REBUILD DONE"
