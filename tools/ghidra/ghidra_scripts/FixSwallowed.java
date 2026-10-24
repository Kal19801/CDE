/* FixSwallowed.java - recover TSV function sites whose address was swallowed
 * by a neighboring function's over-long body.  For each TSV address without a
 * function (descending order): remove the containing function, create the
 * function at the TSV address, then re-create the containing function (its
 * body now stops at the existing entry). */
//@category BSim.CDE
import java.io.*;
import java.util.*;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;

public class FixSwallowed extends GhidraScript {

        @Override
        public void run() throws Exception {
                String[] args = getScriptArgs();
                BufferedReader r = new BufferedReader(new FileReader(args[0]));
                r.readLine();
                List<String[]> rows = new ArrayList<>();
                String line;
                while ((line = r.readLine()) != null) {
                        String[] p = line.split("\t");
                        if (p.length >= 2) rows.add(p);
                }
                r.close();
                rows.sort((a, b) -> b[0].compareTo(a[0]));  // descending
                int fixed = 0, still = 0;
                for (String[] p : rows) {
                        try {
                                Address a = currentProgram.getAddressFactory().getAddress(p[0]);
                                Function f = getFunctionAt(a);
                                if (f != null) {
                                        continue;
                                }
                                Function cont = getFunctionContaining(a);
                                Address centry = null;
                                String cname = null;
                                if (cont != null) {
                                        centry = cont.getEntryPoint();
                                        cname = cont.getName();
                                        removeFunction(cont);
                                }
                                // clear stale (possibly misaligned) instructions around the site
                                try {
                                        clearListing(new AddressSet(a.subtract(16), a.add(16)));
                                } catch (Exception e2) { /* ignore */ }
                                disassemble(a);
                                Function nf = createFunction(a, null);
                                if (nf == null) {
                                        if (centry != null) createFunction(centry, null);
                                        still++;
                                        continue;
                                }
                                if (centry != null) {
                                        Function cf = createFunction(centry, null);
                                        if (cf != null && cname != null && !cname.startsWith("FUN_")) {
                                                cf.setName(cname, SourceType.USER_DEFINED);
                                        }
                                }
                                if (!p[1].isEmpty()) nf.setName(p[1], SourceType.USER_DEFINED);
                                fixed++;
                        } catch (Exception e) {
                                still++;
                        }
                }
                println("[FixSwallowed] fixed=" + fixed + " still=" + still);
        }
}
