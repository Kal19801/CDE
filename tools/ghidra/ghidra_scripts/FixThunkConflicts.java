/* FixThunkConflicts.java - recover TSV function sites blocked by thunk
 * classification.  For each TSV address without a function: demote any thunk
 * functions inside [addr, addr+0x180] back to normal functions, then create
 * the function.  For TSV addresses holding a thunk function: demote it.
 * Headless args: <tsv> */
//@category BSim.CDE
import java.io.*;
import java.util.*;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.symbol.SourceType;

public class FixThunkConflicts extends GhidraScript {

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
                int fixed = 0, made = 0, still = 0;
                for (String[] p : rows) {
                        try {
                                Address a = currentProgram.getAddressFactory().getAddress(p[0]);
                                Function f = getFunctionAt(a);
                                if (f == null) {
                                        // demote thunks inside the would-be body window
                                        Address end = a.add(0x180);
                                        AddressSet win = new AddressSet(a, end);
                                        List<Function> thunks = new ArrayList<>();
                                        FunctionIterator it = currentProgram.getFunctionManager()
                                                .getFunctions(win, true);
                                        while (it.hasNext()) {
                                                Function g = it.next();
                                                if (g.isThunk()) thunks.add(g);
                                        }
                                        for (Function g : thunks) g.setThunkedFunction(null);
                                        f = createFunction(a, null);
                                        if (f == null) { still++; continue; }
                                        made++;
                                } else if (f.isThunk()) {
                                        f.setThunkedFunction(null);
                                } else {
                                        continue;
                                }
                                if (!p[1].isEmpty()) f.setName(p[1], SourceType.USER_DEFINED);
                                fixed++;
                        } catch (Exception e) {
                                still++;
                        }
                }
                println("[FixThunkConflicts] fixed=" + fixed + " made=" + made +
                        " still=" + still);
        }
}
