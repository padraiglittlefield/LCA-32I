`ifndef EXEC_ROB_IF
`define EXEC_ROB_IF
interface execute_reorder_buffer_if;

import CORE_PKG::*;

modport execute();

modport rob();

endinterface
`endif
