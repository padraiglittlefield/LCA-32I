`ifndef EXEC_LSU_IF
`define EXEC_LSU_IF
/*
    Send Calculated Address to the LSU, specifically to the entries in the LDQ and SDQ

*/
interface execute_lsu_if;

import CORE_PKG::*;

modport execute (

);

modport lsu (

);

endinterface
`endif
