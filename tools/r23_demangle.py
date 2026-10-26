#!/usr/bin/env python3
"""r23_demangle.py - parse llvm-undname batch output into flat sig/data TSVs
for ApplyTypesR23.java (sigs/data modes).

Inputs:  r23_pub.tsv (va, mangled, kind), r23_demangled.txt (undname echo+result)
Outputs: r23_sigs.tsv (va, class, ret, conv, '^'-joined params, has_this)
         r23_data.tsv (va, typestr)
"""
import re

PUB = '/tmp/my-project/work/r23_pub.tsv'
DEM = '/tmp/my-project/work/r23_demangled.txt'
OUT_SIG = '/tmp/my-project/work/r23_sigs.tsv'
OUT_DAT = '/tmp/my-project/work/r23_data.tsv'

CONVS = ('__thiscall', '__cdecl', '__stdcall', '__fastcall', '__vectorcall', '__clrcall')
PRIM = {
    'unsigned long': 'dword', 'unsigned int': 'dword', 'long': 'int', 'unsigned short': 'word',
    'wchar_t': 'word', 'unsigned char': 'byte', 'signed char': 'char', 'unsigned __int64': 'qword',
    '__int64': 'longlong', 'unsigned long long': 'qword', 'long long': 'longlong',
    'unsigned long long __int64': 'qword', 'HANDLE': 'dword',
}

def norm_type(t):
    t = t.strip()
    t = re.sub(r'\s*&$', ' *', t)
    t = re.sub(r'\b(class|struct|union|enum)\s+', '', t)
    toks = []  # (text, depth, is_marker)
    depth = 0
    word = []
    def flush():
        nonlocal word
        if word:
            w = ''.join(word)
            word = []
            if w == 'const':
                return
            toks.append((w.replace('*', '@') if depth > 0 else w, depth, False))
    for ch in t:
        if ch == '<':
            flush(); depth += 1; toks.append(('<', depth, True))
        elif ch == '>':
            flush(); depth -= 1; toks.append(('>', depth, True))
        elif ch == ' ':
            flush()
        else:
            word.append(ch)
    flush()
    s2 = ''
    prev = None  # (text, depth, is_marker)
    for w, d, mk in toks:
        if prev is None:
            s2 += w
        elif mk:
            s2 += w
        elif prev[2]:
            s2 += w
        else:
            s2 += ('_' if (d > 0 or prev[1] > 0) else ' ') + w
        prev = (w, d, mk)
    s2 = s2.strip()
    return PRIM.get(s2, s2)

def split_top(s):
    out, depth, cur = [], 0, ''
    for ch in s:
        if ch in '(<[': depth += 1
        elif ch in ')>]': depth -= 1
        if ch == ',' and depth == 0:
            out.append(cur); cur = ''
        else:
            cur += ch
    if cur.strip(): out.append(cur)
    return out

def norm_params(ps):
    ps = [norm_type(p) for p in ps if p.strip()]
    if ps == ['void']: return []
    return ps

def main():
    pub = {}
    for i, ln in enumerate(open(PUB, errors='replace')):
        p = ln.rstrip('\n').split('\t')
        if len(p) >= 3:
            pub[p[1]] = (p[0], p[2])
    dem = {}
    lines = open(DEM, errors='replace').read().split('\n')
    for i in range(0, len(lines) - 1):
        m = lines[i]
        r = lines[i + 1].strip()
        if m and not m.startswith((' ', 'error', 'Warning')) and not r.startswith('error'):
            dem[m] = r
    print(f'pubs {len(pub)}, demangled {len(dem)}')

    n_sig = n_dat = 0
    fs = open(OUT_SIG, 'w'); fd = open(OUT_DAT, 'w')
    for mangled, (va, kind) in pub.items():
        d = dem.get(mangled)
        if not d or d.startswith('??'):
            continue
        if kind == 'func':
            if ':' not in d or '(' not in d:
                continue
            ci = d.rfind('(')
            head = d[:ci].strip()
            tail = d[ci:].strip()
            # params: first '(' ... matching ')' from the end segment
            pe = tail.rfind(')')
            if pe < 0: continue
            params = norm_params(split_top(tail[1:pe]))
            # qualifiers after params: const/volatile/noexcept
            after = tail[pe+1:].strip()
            conv = None
            for c in CONVS:
                if c in head:
                    conv = c
                    break
            if conv is None:
                continue
            hi = head.index(conv)
            before = head[:hi].strip().split()
            static = 'static' in before
            before = [t for t in before if t not in ('public:', 'private:', 'protected:', 'static', 'virtual')]
            ret = norm_type(' '.join(before)) if before else 'void'
            after_head = head[hi + len(conv):].strip()
            # after_head = "Class::Method[const...]"
            am = after_head
            if not am or '(' in am:
                continue
            # method name = after last '::'
            if '::' not in am:
                continue
            cls = am[:am.rfind('::')].strip()
            if not cls:
                continue
            cls_n = norm_type(cls)
            fs.write(f'{va}\t{cls_n}\t{ret}\t{conv}\t{"^".join(params)}\t{0 if static else 1}\n')
            n_sig += 1
        else:
            if d.startswith('public:') or d.startswith('private:') or d.startswith('protected:'):
                d = d.split(':', 1)[1].strip()
            d = d.replace('static ', '')
            # split at last top-level space
            depth, last = 0, -1
            for i2, ch in enumerate(d):
                if ch in '(<[': depth += 1
                elif ch in ')>]': depth -= 1
                elif ch == ' ' and depth == 0: last = i2
            if last < 0:
                continue
            t, name = d[:last].strip(), d[last+1:].strip()
            if not name or not re.match(r'^[A-Za-z_][A-Za-z0-9_:<>@,]*$', name):
                continue
            t = norm_type(t)
            if t in ('void', '') or re.search(r'["()]', t) or t.startswith('"'):
                continue
            fd.write(f'{va}\t{t}\n')
            n_dat += 1
    fs.close(); fd.close()
    print(f'sigs {n_sig}, data {n_dat}')

if __name__ == '__main__':
    main()
