`timescale 1ns/1ns

import CORE_PKG::*;

module tb_core;
    
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
        $dumpfile("tb_core.fst");
        $dumpvars(0,tb_core);
    end


    core dut (
        .clk(clk),
        .rst(rst)
    );

    // ===== Helper Methods ==== //

    task init_signals();
        begin
            clk = 0; 
            rst = 0;
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


     // Dispatch an entry
    task send_instruction (
        input [(RS_ENTRIES * NUM_FUS)-1:0] dep_mask,
        input instr_opcode opcode,
        input logic [31:0] pc,
        input logic [$clog2(ROB_ENTRIES)-1:0] rob_entry_idx,
        input logic [$clog2(NUM_AREGS)-1:0] dst_areg,
        input logic [$clog2(NUM_PREGS)-1:0] dst_preg,
        input logic [31:0] imm_val,
        input logic instr_valid,
        input logic alu_en,
        input logic br_taken
        );

        begin
            disp_packet_t new_disp_pkt; 
            new_disp_pkt.opcode = opcode;
            new_disp_pkt.pc = pc;
            new_disp_pkt.rob_entry_idx = rob_entry_idx;
            new_disp_pkt.dst_preg = dst_preg;
            new_disp_pkt.dst_areg = dst_areg;
            new_disp_pkt.imm_val = imm_val;
            new_disp_pkt.instr_valid = instr_valid;
            new_disp_pkt.pc = pc;
            new_disp_pkt.alu_en = alu_en;
            new_disp_pkt.br_taken = br_taken;

            //sched dispatch
            dut.disp_sched_if[0].disp_pkt = new_disp_pkt;
            dut.disp_sched_if[0].disp_valid = 1;
            dut.disp_sched_if[0].dependency_mask = dep_mask;

            //rob dispatch
            dut.disp_rob_if[0].dest_reg = dst_areg;
            dut.disp_rob_if[0].fire_valid = 1;
            dut.disp_rob_if[0].wb_en = 1;

            @(negedge clk);
            $display("Sent instruction: OPCODE= %s, rob_entry= %0d, PC= 0x%h, alu_en= %0d, imm_val= %0d, dst-areg= %0d, dst-preg= %0d, br_taken= %0d at Cycle %0d", 
                opcode.name(), rob_entry_idx, pc, alu_en, imm_val, dst_areg, dst_preg, br_taken ,cycle_count);
            
            dut.disp_sched_if[0].disp_pkt = 'x;
            dut.disp_sched_if[0].disp_valid = 1'b0;
            dut.disp_sched_if[0].dependency_mask = 'x;
            dut.disp_rob_if[0].dest_reg = 'x;
            dut.disp_rob_if[0].fire_valid = 1'b0;
            dut.disp_rob_if[0].wb_en = 'x;

            @(negedge clk);
        end
    endtask


    task test_dispatch();
        $display("\n[Test 1] Dispatch entry with no dependencies");
            send_instruction('0, ADDI, 0, 0, 1, 33, 16, 1, 1'b1, 0);
            @(posedge clk);
    endtask

    // ==== Main Test Sequence ==== //
    initial begin
        init_signals();
        $display("=== Core Top Testbench ===");
        reset_dut();

        // Tests
        test_dispatch();
        repeat(10) @(posedge clk);
        
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
