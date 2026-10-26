# ScanType.py - find where a datatype is used in signatures; report its size.
# args: <TypeName>   @category BSim.CDE
from ghidra.program.model.data import DataType

args = getScriptArgs()
needle = args[0]

dtm = currentProgram.getDataTypeManager()
hits = []
def walk(cat, depth=0):
    for dt in cat.getDataTypes():
        pass
    for c in cat.getCategories():
        walk(c, depth+1)
# simpler: search all functions
fm = currentProgram.getFunctionManager()
n_params = 0
n_ret = 0
examples = []
for f in fm.getFunctions(True):
    try:
        for p in f.getParameters():
            nm = p.getDataType().getName()
            if needle in nm:
                n_params += 1
                if len(examples) < 10:
                    examples.append('%s %s param=%s' % (f.getEntryPoint(), f.getName(), nm))
    except Exception:
        pass
    try:
        rn = f.getReturnType().getName()
        if needle in rn:
            n_ret += 1
            if len(examples) < 10:
                examples.append('%s %s RETURN=%s' % (f.getEntryPoint(), f.getName(), rn))
    except Exception:
        pass

print('[ScanType] functions with %s in params: %d, in return: %d' % (needle, n_params, n_ret))
for e in examples:
    print('[ScanType]   ' + e)

# find the datatype itself + list functions RETURNING it
found = []
for dt in dtm.getAllDataTypes():
    if needle in dt.getName():
        found.append((dt.getName(), dt.getLength()))
for nm, ln in found[:12]:
    print('[ScanType] datatype %s size=%s' % (nm, ln))

n2 = 0
for f in fm.getFunctions(True):
    try:
        rn = f.getReturnType().getName()
        if needle in rn:
            n2 += 1
            print('[ScanType] RET-FN %s %s conv=%s ret=%s' % (
                f.getEntryPoint(), f.getName(), f.getCallingConventionName(), rn))
    except Exception:
        pass
print('[ScanType] return-fn total=%d' % n2)
