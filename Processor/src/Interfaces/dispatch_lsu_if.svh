`ifndef DISP_LSU_IF
`define DISP_LSU_IF
/*  
    Interface between Dispatch

    Responsibilities:
        1. Dispatch Loads and Stores to the LDQ and SDQ respectfully
        2.

*/
interface dispatch_lsu_if;

import CORE_PKG::*;

modport dispatch (

);

modport lsu (

);

endinterface
`endif
