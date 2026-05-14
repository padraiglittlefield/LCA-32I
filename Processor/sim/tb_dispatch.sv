`timescale 1ns / 1ns
import CORE_PKG::*;

/*
    Assertion Testbench for Dispatch
*/
module tb_dispatch;
    localparam CLK_PERIOD = 20;
    localparam DUTY_CYCLE = 0.5;
    
    logic clk;
    logic rst;
    integer cycle_count = 0;
    
    // DUT signals
    
    /*
        Define DUT signals here

    */
    
    // Test tracking
    integer pass_count = 0;
    integer fail_count = 0;

    logic stall;
    logic flush;
    logic rename_vld[RENAME_WIDTH];
    rename_packet_t rename_disp_pkt[RENAME_WIDTH];
    logic instr_queue_full[RENAME_WIDTH];
    logic [$clog2(LDQ_ENTRIES)-1:0] disp_ldq_idx;
    logic [$clog2(SDQ_ENTRIES)-1:0] disp_sdq_idx;
    logic ldq_full;
    logic sdq_full;
    logic disp_vld;
    logic disp_is_store;
    logic [31:0] disp_store_data;
    logic [$clog2(SDQ_ENTRIES):0] disp_sdq_marker;
    logic [$clog2(ROB_ENTRIES)-1:0] disp_rob_idx;

    disp_packet_t disp_pkt [NUM_FUS];
    logic disp_valid [NUM_FUS];
    logic [(RS_ENTRIES * NUM_FUS)-1:0] dependency_mask [NUM_FUS];
    logic [$clog2(NUM_FUS)-1:0] rs_entry_idx [NUM_FUS];
    logic rs_full [NUM_FUS];
    
    // Reorder Buffer
    logic rob_fire_valid [FIRE_WIDTH];
    logic [4:0] rob_dst_reg [FIRE_WIDTH];
    logic rob_wb_en [FIRE_WIDTH];
    logic [$clog2(ROB_ENTRIES)-1:0] rob_entry_idx [FIRE_WIDTH];
    logic rob_full [FIRE_WIDTH];
    
    dispatch dut (
        .clk_i(clk),
        .rst_i(rst),
        .stall_i(stall),
        .flush_i(flush),
        .rename_vld_i(rename_vld),
        .rename_pkt_i(rename_disp_pkt),
        .instr_queue_full_o(instr_queue_full),
        .disp_pkt_o(disp_pkt),
        .disp_valid_o(disp_valid),
        .dependency_mask_o(dependency_mask),
        .rs_entry_idx_i(rs_entry_idx),
        .rs_full_i(rs_full),
        .rob_fire_valid_o(rob_fire_valid),
        .rob_dst_reg_o(rob_dst_reg),
        .rob_wb_en_o(rob_wb_en),
        .rob_entry_idx_i(rob_entry_idx),
        .rob_full_i(rob_full),
        .disp_ldq_idx_i(disp_ldq_idx),
        .disp_sdq_idx_i(disp_sdq_idx),
        .ldq_full_i(ldq_full),
        .sdq_full_i(sdq_full),
        .disp_vld_o(disp_vld),
        .disp_is_store_o(disp_is_store),
        .disp_store_data_o(disp_store_data),
        .disp_sdq_marker_o(disp_sdq_marker),
        .disp_rob_idx_o(disp_rob_idx)
    );
    
    // Clock generation
    initial begin
        forever begin       
            #(CLK_PERIOD*DUTY_CYCLE) clk = 1'b1;
            cycle_count = cycle_count + 1;
            #(CLK_PERIOD*DUTY_CYCLE) clk = 1'b0;
        end
    end
    
    // Waveform dump
    initial begin
        $dumpfile("tb_EXAMPLE.vcd");
        $dumpvars(0, tb_EXAMPLE);
    end
    
    //Initialize signals
    task init_signals();
        begin
            clk = 0;
            rst = 1;
            
            // Init DUT input signals
        end
    endtask
    
    //Check assertion and update counters
    task check_assertion(input string test_name, input logic condition);
        begin
            if (condition) begin
                $display("  [\033[32mPASS\033[0m] %s", test_name);
                pass_count = pass_count + 1;
            end else begin
                $display("  [\033[31mFAIL\033[0m] %s", test_name);
                fail_count = fail_count + 1;
            end
        end
    endtask
    
    //Reset sequence
    task reset_dut();
        begin
            $display("\n[RESET] Resetting DUT");
            @(negedge clk);
            rst = 1;
            @(negedge clk);
            @(negedge clk);
            rst = 0;
            @(negedge clk);
            $display("[RESET] Reset complete\n");
        end
    endtask
    
    /*
    Dispatch an entry
    task dispatch_entry(input [(RS_ENTRIES * NUM_FUS)-1:0] dep_mask);
        begin
            disp_valid = 1;
            dependency_mask = dep_mask;
            @(negedge clk);
            $display("  Dispatched to entry: %0d, Full: %0b, Reqs: %b", free_entry_out, full_out, reqs);
            disp_valid = 0;
            @(negedge clk);
        end
    endtask

    
    // Test 1: Dispatch with no dependencies
    task test_dispatch_no_deps();
        begin
            $display("\n[Test 1] Dispatch entry with no dependencies");
            dispatch_entry('0);
            @(posedge clk);
            check_assertion("Entry should be valid after dispatch", dut.entry_valid[0] == 1'b1);
            check_assertion("Should have request after dispatch with no deps", reqs[0] == 1'b1);
        end
    endtask
    */

    // Main test sequence
    initial begin
        init_signals();
        
        $display("=== Example Module Testbench ===");
        reset_dut();
        
        // call tests here
        
        repeat(5) @(negedge clk);
        
        $display("\n=== Testbench Complete ===");
        $display("Total Tests: %0d", pass_count + fail_count);
        if (fail_count == 0) begin
            $display("[\033[32mALL TESTS PASSED\033[0m] %0d/%0d passed", pass_count, pass_count + fail_count);
        end else begin
            $display("[\033[31mSOME TESTS FAILED\033[0m] %0d passed, %0d failed", pass_count, fail_count);
        end
        $finish;
    end
    
endmodule
