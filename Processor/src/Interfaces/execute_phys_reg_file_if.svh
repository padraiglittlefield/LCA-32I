`ifndef EXEC_PHYS_REG_FILE_IF
`define EXEC_PHYS_REG_FILE_IF

interface execute_phys_reg_file_if;

import CORE_PKG::*;
localparam NUM_PREGS = 64;
logic ex_valid;
logic [31:0] ex_val;
logic [$clog2(NUM_PREGS)-1:0] ex_dst_reg;

modport execute (
    output ex_valid, ex_val, ex_dst_reg
);

modport phys_reg_file(
    input ex_valid, ex_val, ex_dst_reg
);

endinterface
`endif
