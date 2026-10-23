/* ApplyPdbNames.java - apply PDB S_GPROC32 names to every function whose
 * current name is a placeholder (FUN_/func_/thunk_-default or addressy).
 * Input TSV: va(hex) name. Never renames a function that already carries a
 * non-placeholder name (protects pass3/4 canonical names).
 * Headless args: <pdbnames.tsv> */
//@category BSim.CDE
import java.io.*;
import java.util.*;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;

public class ApplyPdbNames extends GhidraScript {

	private boolean isPlaceholder(String n) {
		if (n.startsWith("FUN_") || n.startsWith("func_")) return true;
		if (n.startsWith("thunk_")) return true;
		// Ghidra default names: entry, __%, or pure hex-ish
		if (n.matches("[0-9A-Fa-f_]{6,}")) return true;
		return false;
	}

	@Override
	public void run() throws Exception {
		String[] args = getScriptArgs();
		BufferedReader r = new BufferedReader(new FileReader(args[0]));
		String line = r.readLine(); // header
		int renamed = 0, kept = 0, nofunc = 0, same = 0;
		while ((line = r.readLine()) != null) {
			String[] p = line.split("\t");
			if (p.length < 2 || p[1].isEmpty()) continue;
			try {
				Address a = currentProgram.getAddressFactory().getAddress(p[0]);
				Function f = getFunctionAt(a);
				if (f == null) { nofunc++; continue; }
				String cur = f.getName();
				String want = p[1];
				if (!isPlaceholder(cur)) { kept++; continue; }
				if (cur.equals(want)) { same++; continue; }
				f.setName(want, SourceType.USER_DEFINED);
				renamed++;
			} catch (Exception e) {
				nofunc++;
			}
		}
		r.close();
		println("[ApplyPdbNames] renamed=" + renamed + " kept=" + kept +
			" same=" + same + " nofunc=" + nofunc);
	}
}
