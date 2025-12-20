`ifndef EXEC_ROB_IF
`define EXEC_ROB_IF
interface execute_reorder_buffer_if;

import CORE_PKG::*;

logic br_mispred;
logic exception;
logic [$clog2(ROB_ENTRIES)-1:0] rob_entry_idx;
logic ex_valid;
logic [31:0] ex_val;

modport execute (
    output br_mispred, exception, rob_entry_idx, ex_valid, ex_val
);

modport rob (
    input br_mispred, exception, rob_entry_idx, ex_valid, ex_val
);

endinterface
`endif
