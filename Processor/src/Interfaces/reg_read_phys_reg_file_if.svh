`ifndef REG_READ_PHYS_REG_FILE
`define REG_READ_PHYS_REG_FILE

interface reg_read_phys_reg_file_if;

import CORE_PKG::*;

logic [$clog2(NUM_PREGS)-1:0] src1_reg;
logic [$clog2(NUM_PREGS)-1:0] src2_reg;

logic [31:0] src1_val;
logic [31:0] src2_val;


modport reg_read (
    input src1_val, src2_val,
    output src1_reg, src2_reg
);

modport phys_reg_file (
    input src1_reg, src2_reg,
    output src1_val, src2_val
);

endinterface
`endif