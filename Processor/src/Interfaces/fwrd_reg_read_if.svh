`ifndef FWRD_REG_READ_IF
`define FWRD_REG_READ_IF

interface fwrd_reg_read_if;

import CORE_PKG::*;

logic [$clog2(NUM_PREGS)-1:0] src1_reg;
logic [$clog2(NUM_PREGS)-1:0] src2_reg;

logic src1_fwrd_hit;
logic src2_fwrd_hit;

logic [31:0] src1_val;
logic [31:0] src2_val;

modport fwrd_unit(
    input src1_reg, src2_reg,
    output src1_fwrd_hit, src1_val, src2_fwrd_hit, src2_val 
);

modport reg_read(
    input src1_fwrd_hit, src1_val, src2_fwrd_hit, src2_val,
    output src1_reg, src2_reg
);

endinterface
`endif
