/* ForceCreateFuncsDesc.java - like ForceCreateFuncs but processes the TSV in
 * DESCENDING address order.  Function bodies built early then stop at existing
 * higher function entries instead of swallowing them (fixes "body contains
 * referring thunk" failures when stubs are removed and real functions abut).
 * Headless args: <tsv> */
//@category BSim.CDE
import java.io.*;
import java.util.*;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;

public class ForceCreateFuncsDesc extends GhidraScript {

	@Override
	public void run() throws Exception {
		String[] args = getScriptArgs();
		if (args.length < 1) {
			println("usage: ForceCreateFuncsDesc.java <tsv>");
			return;
		}
		List<String[]> rows = new ArrayList<>();
		BufferedReader r = new BufferedReader(new FileReader(args[0]));
		r.readLine(); // header
		String line;
		while ((line = r.readLine()) != null) {
			String[] p = line.split("\t");
			if (p.length >= 2) rows.add(p);
		}
		r.close();
		rows.sort((a, b) -> b[0].compareTo(a[0]));  // descending hex VA (fixed width)
		int made = 0, named = 0, skipped = 0;
		for (String[] p : rows) {
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
					f.setName(p[1], SourceType.USER_DEFINED);
					named++;
				}
			} catch (Exception e) {
				skipped++;
			}
		}
		println("[ForceCreateFuncsDesc] made=" + made + " named=" + named +
			" skipped=" + skipped);
	}
}
