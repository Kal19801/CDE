# CDE reconstruction - build bootstrap (local build; there is intentionally
# no GitHub Actions CI -- the toolchain is a no-root private-prefix setup).
#
#   make toolchain   # fetch + unpack cross toolchain into ./toolchain
#   make             # compile all TUs + link CDE_recomp.exe / CDE_recomp.pdb
#   make clean       # remove build objects
#
# Equivalents:  python3 build.py [all|tus|stubs|link|clean]

.PHONY: all toolchain clean

all:
	python3 build.py

toolchain:
	bash scripts/pe_toolchain_setup.sh

clean:
	python3 build.py clean
