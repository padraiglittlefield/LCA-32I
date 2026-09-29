`timescale 1ns/1ns

import CORE_PKG::*;

module tb_phys_reg_file;
    
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
        $dumpfile("tb_phys_reg_file.vcd");
        $dumpvars(0,tb_phys_reg_file);
    end

    // For this test, only test with 1 pipe
    // Register Read
    logic [$clog2(NUM_PREGS)-1:0]   rd_src1_preg    [NUM_FUS];
    logic [$clog2(NUM_PREGS)-1:0]   rd_src2_preg    [NUM_FUS];
    logic [31:0]                    rd_src1_val     [NUM_FUS];
    logic [31:0]                    rd_src2_val     [NUM_FUS];
    // Execute
    logic                           ex_wr_en        [NUM_FUS-1];
    logic [$clog2(NUM_PREGS)-1:0]   ex_wr_preg      [NUM_FUS-1];
    logic [31:0]                    ex_wr_val       [NUM_FUS-1];
    // Reorder Buffer
    logic                           rob_wr_en       [RETIRE_WIDTH];
    logic [$clog2(NUM_AREGS)-1:0]   rob_wr_areg     [RETIRE_WIDTH];
    logic [31:0]                    rob_wr_val      [RETIRE_WIDTH];

    register_file dut (
        .clk(clk),
        .rst(rst),
        .flush_en(1'b0),
        .rd_src1_preg_i(rd_src1_preg),
        .rd_src2_preg_i(rd_src2_preg),
        .rd_src1_val_o(rd_src1_val),
        .rd_src2_val_o(rd_src2_val),
        .ex_wr_en_i(ex_wr_en),
        .ex_wr_preg_i(ex_wr_preg),
        .ex_wr_val_i(ex_wr_val),
        .rob_wr_en_i(rob_wr_en),
        .rob_wr_areg_i(rob_wr_areg),
        .rob_wr_val_i(rob_wr_val)
    );

    // ===== Helper Methods ==== //

    task init_signals();
        begin
            clk = 0; 
            rst = 0;
            for (int i = 0; i < NUM_FUS; i++) begin
                rd_src1_preg[i] = '0;
                rd_src2_preg[i] = '0;
            end
            for (int i = 0; i < NUM_FUS-1; i++) begin
                ex_wr_en[i]   = 1'b0;
                ex_wr_preg[i] = '0;
                ex_wr_val[i]  = '0;
            end
            for (int i = 0; i < RETIRE_WIDTH; i++) begin
                rob_wr_en[i]   = 1'b0;
                rob_wr_areg[i] = '0;
                rob_wr_val[i]  = '0;
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

    // Write the value to the dst_reg
    task write_reg(input [31:0] value, input [$clog2(NUM_PREGS)-1:0] dst_reg);
        begin
            ex_wr_en[0] = 1'b1;
            ex_wr_val[0] = value;
            ex_wr_preg[0] = dst_reg;
            @(negedge clk);
            $display("Wrote %0d to Register %0d at Cycle %0d", value, dst_reg, cycle_count);
            ex_wr_en[0] = 1'b0;
        end
    endtask

    // Read from src regs
    task test_reg_write();
        begin
            $display("\n[Test 1] Verify Register Writes");

            // write to reg file
            write_reg(32'd12, 7);
            @(posedge clk);
            write_reg(32'd13, 8);
            @(posedge clk);
            check_assertion("Value should have been written to register", dut.registers[7] == 12);
            check_assertion("Value should have been written to register", dut.registers[8] == 13);
        end
    endtask

    task test_read_reg();
        begin
            $display("\n[Test 2] Verify Register Reads");

            rd_src1_preg[0] = 7;
            rd_src2_preg[0] = 8;
            @(negedge clk);
            check_assertion("Should read src1 from register",rd_src1_val[0] == 12);
            check_assertion("Should read src2 from register", rd_src2_val[0] == 13);
        end
    endtask

    // ==== Main Test Sequence ==== //
    initial begin
        init_signals();
        $display("=== Physical Register File Testbench ===");
        reset_dut();

        // Tests
        test_reg_write();
        test_read_reg();

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
