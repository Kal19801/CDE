/* DemoteAllThunks.java - demote every thunk-classified function to a normal
 * function so subsequent createFunction calls are not blocked by tail-jmp
 * blocks inside would-be bodies. */
//@category BSim.CDE
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

public class DemoteAllThunks extends GhidraScript {

	@Override
	public void run() throws Exception {
		int n = 0;
		FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
		while (it.hasNext()) {
			Function f = it.next();
			if (f.isThunk()) {
				f.setThunkedFunction(null);
				n++;
			}
		}
		println("[DemoteAllThunks] demoted=" + n);
	}
}
