`ifndef DISP_ROB_IF
`define DISP_ROB_IF

interface dispatch_reorder_buffer_if;

import CORE_PKG::*;

logic fire_valid;
logic [4:0] dest_reg;
logic [$clog2(ROB_ENTRIES)-1:0] rob_entry_idx;
logic rob_full;
logic wb_en;

modport dispatch (
    input rob_entry_idx, rob_full,
    output dest_reg, fire_valid, wb_en
);

modport rob (
    input dest_reg, wb_en, fire_valid,
    output rob_entry_idx, rob_full
);

endinterface
`endif
