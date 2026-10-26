# ClearUserSig.py - drop USER_DEFINED signature source so PDB re-apply wins.
# args: <tsv: va per line>  @category BSim.CDE
from ghidra.program.model.symbol import SourceType

args = getScriptArgs()
n = 0
for ln in open(args[0]):
    va = ln.split('\t')[0].strip()
    if not va or va.startswith('#'):
        continue
    f = getFunctionAt(currentProgram.getAddressFactory().getAddress(va))
    if f is None:
        print('[ClearUserSig] %s NO FUNCTION' % va)
        continue
    f.setSignatureSource(SourceType.DEFAULT)
    print('[ClearUserSig] %s %s source->DEFAULT (was USER_DEFINED)' % (va, f.getName()))
    n += 1
print('[ClearUserSig] cleared=%d' % n)
