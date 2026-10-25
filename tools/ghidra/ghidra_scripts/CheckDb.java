/* CheckDb.java - quick project health check.
 * prints /CDE datatype count, function count, USER_DEFINED sig count.
 * @category BSim.CDE */
import java.util.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;

public class CheckDb extends GhidraScript {
        @Override
        public void run() throws Exception {
                DataTypeManager dtm = currentProgram.getDataTypeManager();
                CategoryPath cp = new CategoryPath("/CDE");
                int n = 0;
                Iterator<DataType> it = dtm.getAllDataTypes();
                while (it.hasNext()) {
                        if (cp.equals(it.next().getCategoryPath())) n++;
                }
                int fn = 0, ud = 0;
                for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
                        fn++;
                        if (f.getSignatureSource() == SourceType.USER_DEFINED) ud++;
                }
                println("[CheckDb] cde_types=" + n + " functions=" + fn + " user_defined_sigs=" + ud);
        }
}
