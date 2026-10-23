/* DumpOne.java - dump decompile of the function at a given VA (hex, no 0x).
 * Usage: <va_hex> [va2_hex ...]
 * @category BSim.CDE */
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

public class DumpOne extends GhidraScript {

	@Override
	public void run() throws Exception {
		String[] args = getScriptArgs();
		DecompInterface di = new DecompInterface();
		di.openProgram(currentProgram);
		for (String a : args) {
			Address addr = currentProgram.getAddressFactory().getAddress(a);
			Function f = getFunctionAt(addr);
			if (f == null) {
				println("[DumpOne] " + a + ": NO FUNCTION");
				continue;
			}
			println("[DumpOne] ===== " + f.getName() + " @ " + a +
				" conv=" + f.getCallingConventionName() +
				" body=" + f.getBody().getNumAddresses());
			DecompileResults res = di.decompileFunction(f, 60, monitor);
			if (res != null && res.decompileCompleted()) {
				println(res.getDecompiledFunction().getC());
			}
			else {
				println("[DumpOne] decompile FAILED: " +
					(res == null ? "null" : res.getErrorMessage()));
			}
		}
		di.dispose();
	}
}
