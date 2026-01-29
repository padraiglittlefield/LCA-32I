`ifndef LSU_ROB_IF
`define LSU_ROB_IF
/*  
    Interface between LSU and Reorder Buffer

    Responsibilities:
        1. Mark stores in the SDQ as committed so they can be issued (no speculative stores allowed)
        2. Write results of Loads in the respective ROB entry

*/
interface lsu_reorder_buffer_if;

import CORE_PKG::*;

modport lsu (

);

modport rob (

);


endinterface
`endif
