`timescale 1ns/1ns

import CORE_PKG::*;

module tb_execute_alu;
    
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
        $dumpfile("tb_execute_alu.vcd");
        $dumpvars(0,tb_execute_alu);
    end

    reg_read_execute_if reg_read_if();
    execute_fwrd_if fwrd_if();
    execute_phy_reg_file_if reg_file_if();
    execute_reorder_buffer_if rob_if();

    execute_alu dut (
        .clk(clk),
        .rst(rst),
        .reg_read_if(reg_read_if),
        .fwrd_if(fwrd_if),
        .reg_file_if(reg_file_if),
        .rob_if(rob_if)
    );

    // ===== Helper Methods ==== //

    task init_signals();
        begin
            clk = 0; 
            rst = 0;
            
            // register file 
            reg_file_if.ex_valid = '0;
            reg_file_if.ex_val = '0;
            reg_file_if.ex_dst_reg = '0;

            // forward
            fwrd_if.dst_reg = '0;
            fwrd_if.ex_val = '0;
            fwrd_if.ex_valid = '0;

            // rob
            rob_if.br_mispred = '0;
            rob_if.exception = '0;
            rob_if.rob_entry_idx = '0
            rob_if.ex_valid = '0;
            rob_if.ex_val = '0;
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
    
    task send_instruction (
        input logic fire_valid_in,
        input logic [31:0] pc,
        input logic [$clog2(NUM_PREGS)-1:0] src1_preg,
        input logic [$clog2(NUM_PREGS)-1:0] src2_preg,
        input logic [$clog2(NUM_PREGS)-1:0] dst_preg,
        input logic [31:0] imm_val,
        input logic instr_valid
        );
        begin
            exec_if.fire_valid = fire_valid_in;
            exec_if.exec_pkt.pc = pc;
            exec_if.exec_pkt.src1_preg = src1_preg;
            exec_if.exec_pkt.src2_preg = src2_preg;
            exec_if.exec_pkt.dst_preg = dst_preg;
            exec_if.exec_pkt.imm_val = imm_val;
            exec_if.exec_pkt.instr_valid = instr_valid;
            $display("Sent instruction: PC=0x%h, src1=%0d, src2=%0d, dst=%0d at Cycle %0d", 
                pc, src1_preg, src2_preg, dst_preg, cycle_count);
        end
    endtask

    // ==== TESTS ==== //
    
    
    task test_reg_write();
        begin
            $display("\n[Test 1] Verify Register Writes");

            // write to reg file
            write_reg(32'd12, 7);
            @(posedge clk);
            write_reg(32'd13, 8);
            @(posedge clk);
            check_assertion("Value should have been written to register", dut.phys_reg_file[7] == 12);
            check_assertion("Value should have been written to register", dut.phys_reg_file[8] == 13);
        end
    endtask
    
    // ==== Main Test Sequence ==== //
    initial begin
        init_signals();
        $display("=== Execute (ALU) Testbench ===");
        reset_dut();

        // Tests
        
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
