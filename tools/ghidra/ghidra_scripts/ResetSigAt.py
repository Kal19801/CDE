# ResetSigAt.py - reset signatures for functions at addresses (TSV: va per line).
# Address-addressed variant of ResetSig.py (name lookup breaks on
# namespace/duplicate method names). @category BSim.CDE
from ghidra.program.model.data import VoidDataType
from ghidra.program.model.symbol import SourceType
from ghidra.program.model.listing import Function

args = getScriptArgs()
fixed = 0
miss = 0
for ln in open(args[0]):
    va = ln.strip()
    if not va or va.startswith('#'):
        continue
    addr = currentProgram.getAddressFactory().getAddress(va)
    f = getFunctionAt(addr)
    if f is None:
        println("[ResetSigAt] %s: NO FUNCTION" % va)
        miss += 1
        continue
    try:
        f.setCustomVariableStorage(False)
        f.setReturnType(VoidDataType(), SourceType.USER_DEFINED)
        f.updateFunction("__cdecl", None,
                         Function.FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS,
                         True, SourceType.USER_DEFINED)
        println("[ResetSigAt] %s %s: reset ok" % (va, f.getName()))
        fixed += 1
    except Exception as e:
        println("[ResetSigAt] %s: fail %s" % (va, e))
println("[ResetSigAt] fixed=%d notfound=%d" % (fixed, miss))
