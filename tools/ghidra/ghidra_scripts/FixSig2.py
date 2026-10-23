# FixSig.py v2 - p82 signature rewrite via ApplyFunctionSignatureCmd (Jython).
# mode A (thiscall): drop implicit-this(ps0) AND our-explicit-this(ps1) -> args=ps[2..]
# mode B (byval):    return pointee by value; args exclude implicit-this/our-this/sret.
#                    State-aware: handles both v15 layout and bad-run layout.
# Target list TSV: recName|mode
# @category BSim.CDE
from ghidra.app.cmd.function import ApplyFunctionSignatureCmd
from ghidra.program.model.data import FunctionDefinitionDataType, Pointer, ParameterDefinitionImpl
from ghidra.program.model.listing import Function
from ghidra.program.model.symbol import SourceType
from jarray import array

args_ = getScriptArgs()
targets = {}
for line in open(args_[0]):
    line = line.strip()
    if not line:
        continue
    p = line.rfind('|')
    targets[line[:p]] = line[p + 1:]
print('[FixSig2] targets: %d' % len(targets))

stat = {'okA': 0, 'okB': 0, 'okC': 0, 'noFn': 0, 'skip': 0, 'cmdfail': 0, 'exc': 0}


def buildNameMap():
    m = {}
    for f in currentProgram.getFunctionManager().getFunctions(True):
        m[f.getName()] = f
    return m


nameMap = buildNameMap()
print('[FixSig2] function map: %d' % len(nameMap))
monitor = getMonitor()


def fixOne(name, mode):
    f = nameMap.get(name)
    if f is None:
        stat['noFn'] += 1
        return
    if f.isThunk() or f.getBody().getNumAddresses() <= 4:
        stat['skip'] += 1
        return
    try:
        ps = f.getParameters()
        ret = f.getReturnType()
        conv = f.getCallingConventionName()
        if mode == 'A':
            if conv != '__thiscall' or len(ps) < 2:
                stat['skip'] += 1
                return
            args = list(ps[2:])
            newRet = ret
        elif mode == 'C':
            # rec __cdecl with explicit-this ps0 (orig is thiscall, same np)
            # -> __thiscall, args=ps[1..]; decompiler re-inserts implicit this
            if conv != '__cdecl' or len(ps) < 1:
                stat['skip'] += 1
                return
            args = list(ps[1:])
            newRet = ret
            conv = '__thiscall'
        else:
            if conv not in ('__thiscall', '__cdecl'):
                stat['skip'] += 1
                return
            if not isinstance(ret, Pointer):
                stat['skip'] += 1
                return
            P = ret.getDataType()
            base = 0
            # thiscall: ps[0]=implicit this -> drop
            if conv == '__thiscall':
                base = 1
            rest = list(ps[base:])
            # bad-run state: first rest formal is the materialized sret (type==ret)
            if rest and rest[0].getDataType().isEquivalent(ret):
                rest = rest[1:]
            # v15 state: find sret formal among rest
            else:
                sretIdx = -1
                for i in range(len(rest)):
                    if rest[i].getDataType().isEquivalent(ret):
                        sretIdx = i
                        break
                if sretIdx >= 0:
                    # only treat as sret if followed by our-this pointer formal
                    rest = rest[:sretIdx] + rest[sretIdx + 1:]
            # drop our-this: for thiscall it is the first remaining formal (a pointer)
            if conv == '__thiscall' and rest:
                rest = rest[1:]
            if len(ps) - base - 1 < 0:
                stat['skip'] += 1
                return
            args = rest
            newRet = P
        if isinstance(newRet, Pointer) or newRet.getName() != 'void':
            pass
        defn = FunctionDefinitionDataType(name)
        defn.setCallingConvention(conv)
        defn.setReturnType(newRet)
        pdefs = [ParameterDefinitionImpl(None, a.getDataType(), '') for a in args]
        defn.setArguments(array(pdefs, ParameterDefinitionImpl))
        cmd = ApplyFunctionSignatureCmd(f.getEntryPoint(), defn, SourceType.IMPORTED)
        if cmd.applyTo(currentProgram, monitor):
            stat['ok' + mode] += 1
        else:
            stat['cmdfail'] += 1
    except Exception as e:
        stat['exc'] += 1
        print('  EXC %s: %s' % (name, str(e)[:120]))


tx = currentProgram.startTransaction('FixSig2')
try:
    for name, mode in targets.items():
        fixOne(name, mode)
finally:
    currentProgram.endTransaction(tx, True)

print('[FixSig2] DONE %s' % stat)
