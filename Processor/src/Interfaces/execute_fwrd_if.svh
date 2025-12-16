`ifndef EXEC_FWRD_IF
`define EXEC_FWRD_IF

//TODO: Ensure that these are registered values from the exec_output register

interface execute_fwrd_if;

import CORE_PKG::*;

logic [$clog2(NUM_PREGS)-1:0] dst_reg;
logic [31:0] ex_val;
logic ex_valid;

modport fwrd_unit(
    input dst_reg, ex_val, ex_valid
);

modport execute(
    output dst_reg, ex_val, ex_valid
);

endinterface
`endif
