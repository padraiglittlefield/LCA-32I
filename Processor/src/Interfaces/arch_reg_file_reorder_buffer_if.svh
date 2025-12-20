`ifndef ARCH_REGS_ROB_IF
`define ARCH_REGS_ROB_IF

interface arch_reg_file_reorder_buffer_if;

import CORE_PKG::*;

logic [$clog2(NUM_AREGS)-1:0] dest_reg;
logic [31:0] result;
logic valid;

modport rob (
    output dest_reg, result, valid
);

modport reg_file(
    input dest_reg, result, valid
);

endinterface
`endif
