/* ApplyTypesR23.java - r23 full PDB type application (flat-text driven).
 * Modes (arg1):
 *   types <udt.tsv>                       build/replace UDTs in /CDE category (byte-exact pad layout)
 *   sigs  <sigs.tsv> <stubs.tsv>          retype ONLY stub-whitelist functions (va,class,ret,conv,params,has_this)
 *   data  <data.tsv>                      set data types at VAs (va,typestr), guarded
 * @category BSim.CDE */
import java.io.*;
import java.util.*;
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.function.ApplyFunctionSignatureCmd;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.ParameterImpl;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.symbol.SourceType;


public class ApplyTypesR23 extends GhidraScript {

	static final CategoryPath CP = new CategoryPath("/CDE");
	DataTypeManager dtm;
	int committed = 0, ops = 0, txId = -1;

	void commit(boolean force) {
		ops++;
		if (force || ops >= 300) {
			currentProgram.endTransaction(txId, true);
			ops = 0;
			committed++;
			txId = currentProgram.startTransaction("apply");
		}
	}

	DataType prim(String n, int size) {
		if (n == null) return Undefined.getUndefinedDataType(Math.max(size, 1));
		switch (n) {
			case "char": return CharDataType.dataType;
			case "byte": return ByteDataType.dataType;
			case "short": return ShortDataType.dataType;
			case "word": case "ushort": return WordDataType.dataType;
			case "int": case "long": return IntegerDataType.dataType;
			case "dword": return DWordDataType.dataType;
			case "longlong": return LongLongDataType.dataType;
			case "qword": return QWordDataType.dataType;
			case "float": return FloatDataType.dataType;
			case "double": return DoubleDataType.dataType;
			case "bool": return BooleanDataType.dataType;
			default: break;
		}
		DataType u = dtm.getDataType(CP, n);
		if (u != null) return u;
		u = dtm.getDataType(new CategoryPath("/"), n);
		return u;
	}

	DataType resolve(String ts, int size) {
		if (ts == null) return Undefined.getUndefinedDataType(Math.max(size, 1));
		ts = ts.trim();
		if (ts.isEmpty()) return Undefined.getUndefinedDataType(Math.max(size, 1));
		int arrN = -1;
		int bi = ts.lastIndexOf('[');
		if (bi > 0 && ts.endsWith("]")) {
			try { arrN = Integer.parseInt(ts.substring(bi + 1, ts.length() - 1)); }
			catch (Exception e) { arrN = -1; }
			ts = ts.substring(0, bi).trim();
		}
		DataType base;
		if (ts.endsWith("*")) {
			String inner = ts.substring(0, ts.length() - 1).trim();
			DataType pt = inner.equals("void") ? null : resolve(inner, size);
			base = new PointerDataType(pt == null || (pt instanceof Undefined) ? Undefined1DataType.dataType : pt, 4);
			if (arrN >= 0) {
				ArrayDataType ad = new ArrayDataType(base, arrN, 4);
				if (ad.getLength() == size) return ad;
			}
			return base;
		}
		base = prim(ts, size);
		if (base == null) base = Undefined.getUndefinedDataType(Math.max(size, 1));
		if (base.getLength() != size && !(base instanceof Pointer)) {
			base = Undefined.getUndefinedDataType(Math.max(size, 1));
		}
		if (arrN >= 0) {
			int el = Math.max(base.getLength(), 1);
			ArrayDataType ad = new ArrayDataType(base, arrN, el);
			if (ad.getLength() == size) return ad;
			return Undefined.getUndefinedDataType(Math.max(size, 1));
		}
		return base;
	}

	static class Mem { String name; int off; String ts; int sz; Mem(String n,int o,String t,int s){name=n;off=o;ts=t;sz=s;} }

	void doTypes(String path) throws Exception {
		Map<String, Integer> sizes = new LinkedHashMap<>();
		Map<String, String> kinds = new HashMap<>();
		Map<String, List<Mem>> mems = new HashMap<>();
		Map<String, List<Object[]>> baseRows = new HashMap<>();
		Set<String> vt = new HashSet<>();
		BufferedReader r = new BufferedReader(new FileReader(path));
		String ln;
		while ((ln = r.readLine()) != null) {
			String[] p = ln.split("\t");
			if (p[0].equals("UDT")) { sizes.put(p[1], Integer.parseInt(p[2])); kinds.put(p[1], p[3]); mems.put(p[1], new ArrayList<>()); baseRows.put(p[1], new ArrayList<>()); }
			else if (p[0].equals("MEMB")) { List<Mem> l = mems.get(p[1]); if (l != null) l.add(new Mem(p[2], Integer.parseInt(p[3]), p[4], Integer.parseInt(p[5]))); }
			else if (p[0].equals("BASE")) { List<Object[]> l = baseRows.get(p[1]); if (l != null) l.add(new Object[]{p[2], Integer.parseInt(p[3]), Integer.parseInt(p[4])}); }
			else if (p[0].equals("VTAB")) vt.add(p[1]);
		}
		r.close();
		int made = 0, rep = 0, skip = 0, grow = 0;
		for (String name : sizes.keySet()) {
			int size = sizes.get(name);
			String kind = kinds.get(name);
			List<Mem> ml = new ArrayList<>(mems.get(name));
			for (Object[] b : baseRows.get(name)) {
				int boff = (Integer) b[1];
				DataType bdt = prim((String) b[0], (Integer) b[2]);
				if (bdt != null && !(bdt instanceof Undefined)) {
					ml.add(new Mem("_base_" + ((String) b[0]).replace(' ', '_'), boff, (String) b[0], (Integer) b[2]));
				}
			}
			boolean zeroM = false;
			for (Mem m : ml) if (m.off == 0) { zeroM = true; break; }
			if (vt.contains(name) && !zeroM) {
				ml.add(new Mem("_vftable", 0, "void *", 4));
			}
			if (ml.isEmpty()) { skip++; continue; }
			ml.sort((a, b2) -> Integer.compare(a.off, b2.off));
			DataType dt;
			if (kind.equals("union")) {
				UnionDataType u = new UnionDataType(new CategoryPath(CP, name), name);
				int mx = 0;
				for (Mem m : ml) {
					DataType t = resolve(m.ts, m.sz);
					try { u.add(t, t.getLength(), m.name, null); mx = Math.max(mx, t.getLength()); } catch (Exception e) { }
				}
				if (mx < size) {
					try { u.add(new ArrayDataType(ByteDataType.dataType, size - mx), size - mx, "_pad", null); } catch (Exception e) { }
				}
				dt = u;
			} else {
				StructureDataType st = new StructureDataType(CP, name, 0);
				st.setPackingEnabled(true);
				int cur = 0, i = 0;
				while (i < ml.size()) {
					int off = ml.get(i).off;
					List<Mem> grp = new ArrayList<>();
					while (i < ml.size() && ml.get(i).off == off) { grp.add(ml.get(i)); i++; }
					if (off > cur) {
						st.add(new ArrayDataType(ByteDataType.dataType, off - cur), off - cur, "_pad" + cur, null);
					}
					if (off < cur) { skip++; continue; }
					if (grp.size() == 1) {
						Mem m = grp.get(0);
						try { st.add(resolve(m.ts, m.sz), m.sz, m.name, null); } catch (Exception e) { st.add(Undefined.getUndefinedDataType(Math.max(m.sz,1)), m.sz, m.name, null); }
					} else {
						UnionDataType u = new UnionDataType(new CategoryPath(CP, name + "_ovl" + off), "ovl" + off);
						int mx = 0;
						for (Mem m : grp) {
							DataType t = resolve(m.ts, m.sz);
							try { u.add(t, t.getLength(), m.name, null); mx = Math.max(mx, t.getLength()); } catch (Exception e) { }
						}
						try { st.add(u, Math.max(mx, 1), "_ovl" + off, null); } catch (Exception e) { }
					}
					cur = st.getLength();
				}
				if (st.getLength() < size) {
					st.add(new ArrayDataType(ByteDataType.dataType, size - st.getLength()), size - st.getLength(), "_tail", null);
				}
				if (st.getLength() > size) grow++;
				dt = st;
			}
			DataType existing = dtm.getDataType(CP, name);
			if (existing == null) {
				dtm.addDataType(dt, DataTypeConflictHandler.REPLACE_HANDLER);
				made++;
			} else {
				DataType r2 = dtm.replaceDataType(existing, dt, true);
				if (r2 != null) rep++; else skip++;
			}
			commit(false);
		}
		commit(true);
		println("[types] made=" + made + " replaced=" + rep + " skipped=" + skip + " grow=" + grow + " tx=" + committed);
	}

	void doSigs(String sigPath, String stubPath) throws Exception {
		Set<String> wl = new HashSet<>();
		BufferedReader r = new BufferedReader(new FileReader(stubPath));
		String ln;
		while ((ln = r.readLine()) != null) {
			String[] p = ln.split("\t");
			if (p.length >= 1 && p[0].length() >= 6) wl.add(p[0]);
		}
		r.close();
		int done = 0, nocls = 0, nofn = 0, nomangle = 0, fail = 0;
		r = new BufferedReader(new FileReader(sigPath));
		while ((ln = r.readLine()) != null) {
			String[] p = ln.split("\t");
			if (p.length < 6) continue;
			String va = p[0];
			if (!wl.contains(va)) { nomangle++; continue; }
			Function f = getFunctionAt(currentProgram.getAddressFactory().getAddress(va));
			if (f == null) { nofn++; continue; }
			String cls = p[1];
			DataType clsT = dtm.getDataType(CP, cls);
			List<Variable> ps = new ArrayList<>();
			if (p[5].equals("1")) {
				ps.add(new ParameterImpl("this", new PointerDataType(clsT != null ? clsT : Undefined1DataType.dataType, 4), currentProgram));
			}
			if (p[4].length() > 0) {
				for (String pt : p[4].split("\\^")) {
					if (pt.isEmpty()) continue;
					if (pt.endsWith("*")) {
						ps.add(new ParameterImpl("p" + ps.size(), resolve(pt, 4), currentProgram));
					} else {
						DataType t = prim(pt, 4);
						if (t == null || t instanceof Undefined) t = Undefined4DataType.dataType;
						if (t.getLength() > 8) t = Undefined4DataType.dataType;
						ps.add(new ParameterImpl("p" + ps.size(), t, currentProgram));
					}
				}
			}
			try {
				DataType ret = p[2].endsWith("*") ? resolve(p[2], 4) : prim(p[2], 4);
				if (ret == null || ret instanceof Undefined) ret = Undefined4DataType.dataType;
				if (p[2].equals("void")) ret = VoidDataType.dataType;
				f.setCustomVariableStorage(false);
				f.setCallingConvention(p[3].contains("this") ? "__thiscall" : "unknown");
				f.replaceParameters(ps, Function.FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS, true, SourceType.USER_DEFINED);
				f.setReturnType(ret, SourceType.USER_DEFINED);
				done++;
			} catch (Exception e) { fail++; }
			commit(false);
		}
		r.close();
		commit(true);
		println("[sigs] done=" + done + " fail=" + fail + " nocls=" + nocls + " nofn=" + nofn + " offwl=" + nomangle + " tx=" + committed);
	}

	void doData(String dataPath) throws Exception {
		BufferedReader r = new BufferedReader(new FileReader(dataPath));
		String ln;
		int done = 0, skipIns = 0, skipSz = 0, nul = 0;
		while ((ln = r.readLine()) != null) {
			String[] p = ln.split("\t");
			if (p.length < 2) continue;
			String ts = p[1].trim();
			DataType t;
			if (ts.endsWith("*")) t = resolve(ts, 4);
			else {
				t = prim(ts, 4);
				if (t == null || (t instanceof Undefined) || t.getLength() > 64) { nul++; continue; }
			}
			Address a = currentProgram.getAddressFactory().getAddress(p[0]);
			Instruction ins = getInstructionAt(a);
			if (ins != null) { skipIns++; continue; }
			Data d = getDataAt(a);
			if (d != null && d.getLength() != t.getLength()) { skipSz++; continue; }
			try {
				if (d == null) { createData(a, t); done++; }
				else { clearListing(a, a.add(t.getLength() - 1)); createData(a, t); done++; }
			} catch (Exception e) { skipSz++; }
			commit(false);
		}
		r.close();
		commit(true);
		println("[data] done=" + done + " skipIns=" + skipIns + " skipSz=" + skipSz + " nul=" + nul + " tx=" + committed);
	}

	@Override
	public void run() throws Exception {
		String[] args = getScriptArgs();
		dtm = currentProgram.getDataTypeManager();
		txId = currentProgram.startTransaction("apply");
		String mode = args[0];
		if (mode.equals("types")) doTypes(args[1]);
		else if (mode.equals("sigs")) doSigs(args[1], args[2]);
		else if (mode.equals("data")) doData(args[1]);
		currentProgram.endTransaction(txId, true);
	}
}
