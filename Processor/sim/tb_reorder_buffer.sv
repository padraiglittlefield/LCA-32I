`timescale 1ns/1ns

import CORE_PKG::*;

module tb_reorder_buffer;
    
    // ===== Testbench Setup ===== //
    
    
    // generate clock
    localparam CLK_PERIOD = 20;
    localparam DUTY_CYCLE = 0.5;

    logic clk;
    logic rst;
    integer cycle_count = 0;

    initial begin
        forever begin
            #(CLK_PERIOD * DUTY_CYCLE) clk = 1'b1;
            cycle_count = cycle_count + 1;
            #(CLK_PERIOD * DUTY_CYCLE) clk = 1'b0;            
        end
    end

    // Test tracking
    integer pass_count = 0;
    integer fail_count = 0;

    initial begin
        $dumpfile("tb_reorder_buffer.vcd");
        $dumpvars(0,tb_reorder_buffer);
    end

    localparam RETIRE_WIDTH = 2;
    localparam FIRE_WIDTH = 2;

    // Dispatch
    logic                           disp_fire_valid [FIRE_WIDTH];
    logic [$clog2(NUM_AREGS)-1:0]   disp_dst_areg   [FIRE_WIDTH];
    logic                           disp_wb_en      [FIRE_WIDTH];
    logic [$clog2(ROB_ENTRIES)-1:0] disp_rob_idx    [FIRE_WIDTH];
    logic                           disp_rob_full   [FIRE_WIDTH];
    // Execute
    logic                           ex_valid        [NUM_FUS-1];
    logic [$clog2(ROB_ENTRIES)-1:0] ex_rob_idx      [NUM_FUS-1];
    logic [31:0]                    ex_val          [NUM_FUS-1];
    logic                           ex_br_mispred   [NUM_FUS-1];
    logic                           ex_exception    [NUM_FUS-1];
    // Register File
    logic                           ret_wr_en       [RETIRE_WIDTH];
    logic [$clog2(NUM_AREGS)-1:0]   ret_wr_areg     [RETIRE_WIDTH];
    logic [31:0]                    ret_wr_val      [RETIRE_WIDTH];
    // Flush
    logic                           flush;
    logic [31:0]                    flush_pc;

    reorder_buffer #(
        .RETIRE_WIDTH(RETIRE_WIDTH),
        .FIRE_WIDTH(FIRE_WIDTH)
    ) dut (
        .clk(clk),
        .rst(rst),
        .flush_en(1'b0),
        .disp_fire_valid_i(disp_fire_valid),
        .disp_dst_areg_i(disp_dst_areg),
        .disp_wb_en_i(disp_wb_en),
        .disp_rob_idx_o(disp_rob_idx),
        .disp_rob_full_o(disp_rob_full),
        .ex_valid_i(ex_valid),
        .ex_rob_idx_i(ex_rob_idx),
        .ex_val_i(ex_val),
        .ex_br_mispred_i(ex_br_mispred),
        .ex_exception_i(ex_exception),
        .ret_wr_en_o(ret_wr_en),
        .ret_wr_areg_o(ret_wr_areg),
        .ret_wr_val_o(ret_wr_val),
        .flush_o(flush),
        .flush_pc_o(flush_pc)
    );

    // ===== Helper Methods ==== //

    task init_signals();
        begin
            clk = 0; 
            rst = 0;
            for (int i = 0; i < FIRE_WIDTH; i++) begin
                disp_fire_valid[i] = 1'b0;
                disp_dst_areg[i]   = '0;
                disp_wb_en[i]      = 1'b0;
            end
            for (int i = 0; i < NUM_FUS-1; i++) begin
                ex_valid[i]      = 1'b0;
                ex_rob_idx[i]    = '0;
                ex_val[i]        = '0;
                ex_br_mispred[i] = 1'b0;
                ex_exception[i]  = 1'b0;
            end
        end
    endtask

    // Check assertion and update counters
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
    
    // Reset sequence
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

    
    

    // ==== Main Test Sequence ==== //
    initial begin
        init_signals();
        $display("=== Reorder Buffer Testbench ===");
        reset_dut();

        // Tests
        


        repeat(5) @(posedge clk);

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
