/* ForceCreateFuncs.java - create functions at PDB S_GPROC32 addresses the
 * auto-analysis skipped. Input TSV: va(hex) name size. Also disassembles and
 * creates functions, applying the PDB name.
 * Headless args: <missing.tsv> */
//@category BSim.CDE
import java.io.*;
import java.util.*;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;

public class ForceCreateFuncs extends GhidraScript {

	@Override
	public void run() throws Exception {
		String[] args = getScriptArgs();
		if (args.length < 1) {
			println("usage: ForceCreateFuncs.java <missing.tsv>");
			return;
		}
		BufferedReader r = new BufferedReader(new FileReader(args[0]));
		String line = r.readLine(); // header
		int made = 0, named = 0, skipped = 0;
		while ((line = r.readLine()) != null) {
			String[] p = line.split("\t");
			if (p.length < 2) continue;
			try {
				Address a = currentProgram.getAddressFactory().getAddress(p[0]);
				Function f = getFunctionAt(a);
				if (f == null) {
					disassemble(a);
					f = createFunction(a, null);
					if (f == null) { skipped++; continue; }
					made++;
				}
				if (!p[1].isEmpty()) {
					// CDE: FUN_<origaddr> names are meaningful (stub address tags);
					// apply them too. Source TSV comes from our own PDB.
					f.setName(p[1], SourceType.USER_DEFINED);
					named++;
				}
			} catch (Exception e) {
				skipped++;
			}
		}
		r.close();
		println("[ForceCreateFuncs] made=" + made + " named=" + named + " skipped=" + skipped);
	}
}
