# ResetSig.py - reset signatures for functions BSim cannot parameter-assign.
# @category BSim.CDE
import re
from ghidra.program.model.data import VoidDataType
from ghidra.program.model.symbol import SourceType
from ghidra.program.model.listing import Function

args = getScriptArgs()
txt = open(args[0]).read()
fixed = 0
miss = 0
for nm in re.findall(r'"([^"]+)"', txt):
    f = getFunction(nm)
    if f is None:
        miss += 1
        continue
    try:
        f.setCustomVariableStorage(False)
        f.setReturnType(VoidDataType(), SourceType.USER_DEFINED)
        f.updateFunction("__cdecl", None,
                         Function.FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS,
                         True, SourceType.USER_DEFINED)
        f.setName(nm, SourceType.USER_DEFINED)
        fixed += 1
    except Exception as e:
        print("  fail %s: %s" % (nm, e))
print("[ResetSig.py] fixed=%d notfound=%d" % (fixed, miss))
