// DeThunk.java - clear thunk flags so BSim signs these tiny jmp functions too
// @category BSim.CDE
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.util.ArrayList;
import java.util.List;

public class DeThunk extends GhidraScript {

        @Override
        public void run() throws Exception {
                List<Function> thunks = new ArrayList<Function>();
                FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
                while (it.hasNext()) {
                        Function f = it.next();
                        if (f.isThunk()) {
                                thunks.add(f);
                        }
                }
                int n = 0;
                for (Function f : thunks) {
                        try {
                                f.setThunkedFunction(null);
                                n = n + 1;
                        }
                        catch (Exception e) {
                                println("  fail " + f.getName() + ": " + e.getMessage());
                        }
                }
                println("[DeThunk] cleared=" + n + " of " + thunks.size());
        }
}
