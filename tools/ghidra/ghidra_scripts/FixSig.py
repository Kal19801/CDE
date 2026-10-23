# FixSig.py - p82 signature rewrite on typed REC program (Jython).
# mode A: drop Ghidra-implicit duplicated this (ps[0] in ECX) -> params = ps[1..]
# mode B: byval promote: drop dup-this AND sret formal (type==ret ptr), return pointee by value.
# Target list TSV: recName|mode
# @category BSim.CDE
from ghidra.program.model.data import FunctionDefinitionDataType, ParameterDefinitionImpl
from ghidra.program.model.listing import Function
from ghidra.program.model.symbol import SourceType
from ghidra.program.model.data import Pointer
from jarray import array

args = getScriptArgs()
targets = {}
for line in open(args[0]):
    line = line.strip()
    if not line:
        continue
    p = line.rfind('|')
    targets[line[:p]] = line[p + 1:]
print('[FixSig.py] targets: %d' % len(targets))

okA = [0]
okB = [0]
noFn = [0]
badShape = [0]
multiSret = [0]
exc = [0]


def regname(ps0):
    st = ps0.getVariableStorage()
    if not st.isRegisterStorage():
        return None
    r = st.getRegister()
    return r.getName() if r is not None else None


def apply(f, conv, newRet, ps, start, dropIdx):
    from ghidra.program.model.listing import ParameterImpl
    params = []
    for i in range(start, len(ps)):
        if i == dropIdx:
            continue
        params.append(ParameterImpl(ps[i].getName(), ps[i].getDataType(),
                                    None, currentProgram))
    if newRet is not None and newRet.getName() == 'void':
        retVar = None
    else:
        retVar = ParameterImpl('__retval__', newRet, None, currentProgram)
    f.updateFunction(conv, retVar, params,
                     Function.FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS,
                     True, SourceType.USER_DEFINED)


def buildNameMap():
    m = {}
    fm = currentProgram.getFunctionManager()
    for f in fm.getFunctions(True):
        m[f.getName()] = f
    return m


nameMap = buildNameMap()
print('[FixSig.py] function map: %d' % len(nameMap))


def fixOne(name, mode):
    f = nameMap.get(name)
    if f is None:
        noFn[0] += 1
        return
    if f.isThunk() or f.getBody().getNumAddresses() <= 4:
        badShape[0] += 1
        return
    try:
        conv = f.getCallingConventionName()
        ps = f.getParameters()
        ret = f.getReturnType()
        if mode == 'A':
            if conv != '__thiscall' or len(ps) < 2:
                badShape[0] += 1
                return
            if regname(ps[0]) is None or regname(ps[0]).upper() != 'ECX':
                badShape[0] += 1
                return
            apply(f, conv, ret, ps, 1, -1)
            okA[0] += 1
        else:  # B
            if not isinstance(ret, Pointer):
                badShape[0] += 1
                return
            if conv not in ('__thiscall', '__cdecl') or len(ps) < 2:
                badShape[0] += 1
                return
            if regname(ps[0]) is None:
                badShape[0] += 1
                return
            P = ret.getDataType()
            sretIdx = -1
            for i in range(1, len(ps)):
                if ps[i].getDataType().isEquivalent(ret):
                    if sretIdx >= 0:
                        multiSret[0] += 1
                        return
                    sretIdx = i
            if sretIdx < 0:
                badShape[0] += 1
                return
            apply(f, conv, P, ps, 1, sretIdx)
            okB[0] += 1
    except Exception as e:
        exc[0] += 1
        print('  EXC %s: %s' % (name, e))


tx = currentProgram.startTransaction('FixSig')
try:
    for name, mode in targets.items():
        fixOne(name, mode)
finally:
    currentProgram.endTransaction(tx, True)

print('[FixSig.py] DONE okA=%d okB=%d noFn=%d badShape=%d multiSret=%d exc=%d'
      % (okA[0], okB[0], noFn[0], badShape[0], multiSret[0], exc[0]))
