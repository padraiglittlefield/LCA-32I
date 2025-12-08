`ifndef EXEC_SCHED_IF
`define EXEC_SCHED_IF


/*

    Responsible for clearing dependencies and entries in the scheduler    

*/

interface execute_scheduler_if;

    import CORE_PKG::*;
    
    logic [($clog2(RS_ENTRIES))-1:0] retire_rs_entry;
    logic retire_rs_valid;

    modport execute(
        output retire_rs_entry, retire_rs_valid
    );

    modport scheduler(
        input retire_rs_entry, retire_rs_valid
    );

endinterface
`endif
