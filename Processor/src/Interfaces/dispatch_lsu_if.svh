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

logic disp_ld_valid;
logic disp_st_valid;

logic [$clog2(SDQ_ENTRIES)-1:0] disp_sdq_marker_i;
logic ldq_full;
logic sdq_full;


modport dispatch (
   input disp_ld_valid
);

modport lsu (
    output disp_ld_valid
);

endinterface
`endif
