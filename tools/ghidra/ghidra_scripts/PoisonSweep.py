# PoisonSweep.py - DEEP sweep of DataTypeManager for FunctionDefinitionDataTypes
# whose params/return reference <needle>, INCLUDING definitions nested inside
# typedef chains / pointers / arrays / composite fields (p86 DataScan methodology
# gap). Also maps poisoned defs -> data items -> referencing functions.
# args: <needle> <outDefsTsv> <outDataTsv>
# outDefsTsv: path<TAB>defname<TAB>nparams<TAB>paramtypes
# outDataTsv: data_addr<TAB>datatype_path<TAB>defname
# @category BSim.CDE
from ghidra.program.model.data import FunctionDefinitionDataType, FunctionDefinition, TypeDef
from ghidra.program.model.data import Pointer as PtrDT
from ghidra.program.model.data import Array as ArrDT
from ghidra.program.model.data import Composite as CompDT

import sys

args = getScriptArgs()
needle = args[0]
outDefs = args[1]
outData = args[2]

dtm = currentProgram.getDataTypeManager()

found_defs = {}   # id(def) -> (chainstr, defname, params_repr)
def_chain_hits = []

def type_name(dt):
    try:
        return dt.getName()
    except:
        return '<noname>'

def def_mentions(defdt):
    try:
        parts = []
        hit = False
        dargs = defdt.getArguments()
        for i in range(len(dargs)):
            a = dargs[i]
            adt = None
            try:
                adt = a.getDataType()
            except Exception:
                pass
            an = adt.getName() if adt is not None else '?'
            parts.append(an)
            if needle in an:
                hit = True
        r = defdt.getReturnType()
        rn = r.getName() if r is not None else '?'
        if needle in rn:
            hit = True
        return hit, parts, rn
    except Exception as e:
        return False, ['ERR:%s' % e], '?'

def walk_type(dt, chain, depth, out_sink):
    """recursively walk a datatype tree; record FunctionDefinition hits"""
    if dt is None or depth > 12:
        return
    try:
        if isinstance(dt, FunctionDefinition):
            hit, parts, rn = def_mentions(dt)
            if hit:
                chainstr = ' -> '.join(chain) if chain else '(top-level)'
                key = (chainstr, dt.getName())
                if key not in found_defs:
                    found_defs[key] = (chainstr, dt.getName(), parts, rn)
                    out_sink.append((chainstr, dt.getName(), str(len(dargs)), ';'.join(parts) + ' => ' + rn))
            return  # don't recurse into definition params (avoid explosion)
    except Exception:
        pass
    nm = type_name(dt)
    try:
        if isinstance(dt, TypeDef):
            walk_type(dt.getBaseDataType(), chain + ['typedef:%s' % nm], depth + 1, out_sink)
        elif isinstance(dt, PtrDT):
            walk_type(dt.getDataType(), chain + ['ptr:%s' % nm], depth + 1, out_sink)
        elif isinstance(dt, ArrDT):
            walk_type(dt.getDataType(), chain + ['array:%s' % nm], depth + 1, out_sink)
        elif isinstance(dt, CompDT):
            for i in range(dt.getNumComponents()):
                c = dt.getComponent(i)
                try:
                    sub = c.getDataType()
                except Exception:
                    sub = None
                if sub is not None:
                    walk_type(sub, chain + ['%s.%s' % (nm, c.getFieldName() if c.getFieldName() else i)], depth + 1, out_sink)
    except Exception as e:
        pass

# ---- 1. sweep every DTM root type ----
rootcat = dtm.getRootCategory()
out_defs_rows = []
def sweep_cat(cat, path):
    for dt in cat.getDataTypes():
        walk_type(dt, ['DTM:%s' % dt.getPathName()], 0, out_defs_rows)
    for sub in cat.getCategories():
        sweep_cat(sub, path + '/' + sub.getName())
sweep_cat(rootcat, '')

with open(outDefs, 'w') as fh:
    for row in out_defs_rows:
        fh.write('\t'.join(row) + '\n')
print('[PoisonSweep] DTM function-definition hits: %d -> %s' % (len(out_defs_rows), outDefs))

# ---- 2. sweep all DEFINED DATA items whose type tree contains a poisoned def ----
from ghidra.program.model.address import AddressSet
listing = currentProgram.getListing()
data_rows = []
n_data = 0
for d in listing.getDefinedData(True):
    n_data += 1
    rows_before = []
    walk_type(d.getDataType(), ['DATA@%s:%s' % (d.getAddress(), type_name(d.getDataType()))], 0, rows_before)
    if rows_before:
        for rb in rows_before:
            data_rows.append(('%s' % d.getAddress(), rb[0], rb[1]))
print('[PoisonSweep] scanned %d data items, poisoned data items: %d' % (n_data, len(set(r[0] for r in data_rows))))

with open(outData, 'w') as fh:
    for r in data_rows:
        fh.write('\t'.join(r) + '\n')

# ---- 3. function signature sources mentioning needle (function-side view) ----
fm = currentProgram.getFunctionManager()
n_fn = 0
n_fnhit = 0
fn_rows = []
for f in fm.getFunctions(True):
    n_fn += 1
    try:
        sig = f.getSignature(True)
        rows_before = []
        walk_type(sig, ['FUNC@%s:%s' % (f.getEntryPoint(), f.getName())], 0, rows_before)
        if rows_before:
            n_fnhit += 1
            if len(fn_rows) < 40:
                fn_rows.append('%s %s' % (f.getEntryPoint(), f.getName()))
    except Exception:
        pass
print('[PoisonSweep] functions scanned=%d, signature-source hits=%d' % (n_fn, n_fnhit))
for fr in fn_rows[:20]:
    print('[PoisonSweep]   sigsrc-hit: ' + fr)
