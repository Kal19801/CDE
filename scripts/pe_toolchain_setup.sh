#!/bin/bash
# pe_toolchain_setup.sh - fetch + unpack the PE cross toolchain from Debian
# debs into a private prefix (no root required).
#
# Produces ./toolchain/usr/lib/llvm-19/bin/{clang,lld-link,llvm-pdbutil,...}
#          ./toolchain/usr/i686-w64-mingw32/{include,lib}
#          ./toolchain/usr/lib/gcc/i686-w64-mingw32/14-posix/libgcc.a
#
# Notes:
# - clang-19/lld-19/llvm-19 + mingw-w64 12 (i686) + gcc-mingw (posix) are the
#   exact components the reconstruction was built and verified with.
# - openjdk is only needed for the optional Ghidra BSim equivalence pipeline
#   (tools/ghidra).  Skip it with SKIP_JDK=1.
set -e
REPO=$(cd "$(dirname "$0")/.." && pwd)
DEBS="$REPO/toolchain_debs"
TC="${CDE_TOOLCHAIN:-$REPO/toolchain}"
mkdir -p "$DEBS" "$TC"
cd "$DEBS"
for p in clang-19 libclang-cpp19 libclang1-19 libclang-common-19-dev libllvm19 \
         lld-19 llvm-19 python3-clang-19 \
         mingw-w64-common mingw-w64-i686-dev gcc-mingw-w64-i686-posix \
         binutils-mingw-w64-i686 \
         $( [ "${SKIP_JDK:-0}" = 1 ] || echo openjdk-21-jdk-headless openjdk-21-jre-headless ); do
  ls "${p}"_*.deb >/dev/null 2>&1 || apt-get download "$p" || echo "WARN: download failed: $p"
done
for d in *.deb; do dpkg -x "$d" "$TC/"; done
# clang driver needs its builtin headers resource dir (from libclang-common-19-dev)
ln -sf "$TC/usr/lib/llvm-19/lib/libclang-19.so.19" "$TC/usr/lib/llvm-19/lib/libclang-19.so"
# Debian jdk-headless lacks bin/java; system java is the same JVM version
[ -d "$TC/usr/lib/jvm/java-21-openjdk-amd64" ] && \
  ln -sf /usr/bin/java "$TC/usr/lib/jvm/java-21-openjdk-amd64/bin/java"
echo "toolchain ready: $TC"
echo "clang: $($TC/usr/lib/llvm-19/bin/clang --version | head -1)"
