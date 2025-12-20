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
    execute_phys_reg_file_if reg_file_if();
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
            rob_if.rob_entry_idx = '0;
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
        input instr_opcode opcode,
        input logic [31:0] pc,
        input logic [$clog2(ROB_ENTRIES)-1:0] rob_entry_idx,
        input logic [$clog2(NUM_AREGS)-1:0] dst_areg,
        input logic [$clog2(NUM_PREGS)-1:0] dst_preg,
        input logic [31:0] imm_val,
        input logic instr_valid,
        input logic [31:0] src1_val,
        input logic [31:0] src2_val,
        input logic alu_en,
        input logic br_taken
        );

        begin
            exec_packet_t new_exec_pkt; 
            new_exec_pkt.opcode = opcode;
            new_exec_pkt.pc = pc;
            new_exec_pkt.rob_entry_idx = rob_entry_idx;
            new_exec_pkt.dst_preg = dst_preg;
            new_exec_pkt.dst_areg = dst_areg;
            new_exec_pkt.imm_val = imm_val;
            new_exec_pkt.instr_valid = instr_valid;
            new_exec_pkt.pc = pc;
            new_exec_pkt.src1_val = src1_val;
            new_exec_pkt.src2_val = src2_val;
            new_exec_pkt.alu_en = alu_en;
            new_exec_pkt.br_taken = br_taken;

            reg_read_if.exec_pkt = new_exec_pkt;
            reg_read_if.fire_valid = 1'b1;
            @(negedge clk);
            $display("Sent instruction: OPCODE= %s, rob_entry= %0d, PC= 0x%h, alu_en= %0d, ,val1= %0d, val2= %0d, imm_val= %0d, dst-areg= %0d, dst-preg= %0d, br_taken= %0d at Cycle %0d", 
                opcode.name(), rob_entry_idx, pc, alu_en, src1_val, src2_val, imm_val, dst_areg, dst_preg, br_taken ,cycle_count);
            reg_read_if.fire_valid = 1'b0;
            @(negedge clk);
        
        end
    endtask

    task debug_alu();
        begin
            $display("ALU Output: Value= %0d, Valid=%0d",dut.aluout,dut.aluout_valid);
            $display("=== Debug ALU Inputs ===");
            $display("ALU alu_en=%0d", dut.alu.alu_en);
            $display("ALU opcode=%s", dut.alu.opcode.name());
            $display("ALU src1_val=%0d (0x%h)", dut.alu.src1_val, dut.alu.src1_val);
            $display("ALU src2_val=%0d (0x%h)", dut.alu.src2_val, dut.alu.src2_val);
            $display("ALU imm_val=%0d (0x%h)", dut.alu.imm_val, dut.alu.imm_val);
            $display("ALU Output: Value=%0d, Valid=%0d", dut.aluout, dut.aluout_valid);
        end
    endtask

    // ==== TESTS ==== //
    
    
    task test_alu_r();
        begin
            $display("\n[Test 1] Verify Execute executes with alu");

            // write to reg file
            send_instruction(ADD, 0, 0, 1, 33, 7, 1, 5, 5, 1, 0);
            @(posedge clk);
            check_assertion("ADD should result in 10", dut.aluout == 10);
            check_assertion("ALU should have valid result", dut.aluout_valid == 1);
        end
    endtask

    task test_alu_i();
        begin
            $display("\n[Test 2] Verify Execute with immediate");

            // write to reg file
            send_instruction(ADDI, 0, 0, 1, 33, 7, 1, 5, 5, 1, 0);
            @(posedge clk);
            check_assertion("ADD should result in 10", dut.aluout == 12);
            check_assertion("ALU should have valid result", dut.aluout_valid == 1);
        end
    endtask

    task test_alu_not_en();
        begin
            $display("\n[Test 3] Verify Execute with alu_en off");

            // write to reg file
            send_instruction(ADDI, 0, 0, 1, 33, 7, 1, 5, 5, 0, 0);
            @(posedge clk);
            check_assertion("ALU should not have valid result", dut.aluout_valid == 0);
        end
    endtask
    

    task test_reg_file();
        begin
            $display("\n[Test 4] Verify Execute sends correct data to reg file");

            // write to reg file
            send_instruction(ADD, 0, 0, 1, 33, 7, 1, 5, 5, 1, 0);
            @(posedge clk);
            check_assertion("Execute should write to the correct dest register", reg_file_if.ex_dst_reg == 33);
            check_assertion("Execute value should be valid", reg_file_if.ex_valid == 1'b1);
            check_assertion("Execute value should be correct", reg_file_if.ex_val == 10);
        end
    endtask

    task test_rob();
        begin
            $display("\n[Test 5] Verify Execute sends correct data to reorder buffer");

            send_instruction(ADD, 0, 7, 1, 33, 7, 1, 5, 5, 1, 0);
            @(posedge clk);
            debug_alu();
            check_assertion("No branch misprediction should be detected", rob_if.br_mispred == 0);
            check_assertion("No exeception should be raised", rob_if.exception == 0);
            check_assertion("Execute should write to the correct ROB entry", rob_if.rob_entry_idx == 7);
            check_assertion("Execute value should be valid", rob_if.ex_valid == 1);
            check_assertion("Execute value should be correct", rob_if.ex_val == 10);
            
        end
    endtask

    task test_fwrd_unit();
        begin
            $display("\n[Test 6] Verify Execute sends correct data to forwarding unit");
     
            send_instruction(ADD, 0, 0, 1, 33, 7, 1, 5, 5, 1, 0);
            @(posedge clk);
            check_assertion("Execute should send correct dest register", reg_file_if.ex_dst_reg == 33);
            check_assertion("Forwarded Execute value should be valid", reg_file_if.ex_valid == 1'b1);
            check_assertion("Forwarded Execute value should be correct", reg_file_if.ex_val == 10);
        end
    endtask

    task test_branch_correct_prediction_t();
        begin
            $display("\n[Test 7] Verify Execute correctly detects a correct branch when it should be taken");

            send_instruction(BNE, 0, 0, 1, 33, 7, 1, 6, 7, 1, 1);
            @(posedge clk);
            check_assertion("Execute value should be valid", rob_if.ex_valid == 1);
            check_assertion("No branch misprediction should be detected", rob_if.br_mispred == 0);
        end
    endtask

    task test_branch_incorrect_prediction_t();
        begin
            $display("\n[Test 8] Verify Execute correctly detects an incorrect branch when it should be taken");

            send_instruction(BNE, 0, 0, 1, 33, 7, 1, 6, 7, 1, 0);
            @(posedge clk);
            check_assertion("Execute value should be valid", rob_if.ex_valid == 1);
            check_assertion("Branch misprediction should be detected", rob_if.br_mispred == 1);
        end
    endtask

    task test_branch_correct_prediction_nt();
        begin
            $display("\n[Test 9] Verify Execute correctly detects a correct branch when it should be not taken");

            send_instruction(BNE, 0, 0, 1, 33, 7, 1, 7, 7, 1, 0);
            @(posedge clk);
            check_assertion("Execute value should be valid", rob_if.ex_valid == 1);
            check_assertion("No branch misprediction should be detected", rob_if.br_mispred == 0);
        end
    endtask

    task test_branch_incorrect_prediction_nt();
        begin
            $display("\n[Test 10] Verify Execute correctly detects an incorrect branch when it should be not taken");

            send_instruction(BNE, 0, 0, 1, 33, 7, 1, 7, 7, 1, 1);
            @(posedge clk);
            check_assertion("Execute value should be valid", rob_if.ex_valid == 1);
            check_assertion("Branch misprediction should be detected", rob_if.br_mispred == 1);
        end
    endtask



    // ==== Main Test Sequence ==== //
    initial begin
        init_signals();
        $display("=== Execute (ALU) Testbench ===");
        reset_dut();

        // Tests
        test_alu_r();
        test_alu_i();
        test_alu_not_en();
        test_reg_file();
        test_rob();
        test_fwrd_unit();
        test_branch_correct_prediction_t();
        test_branch_incorrect_prediction_t();
        test_branch_correct_prediction_nt();
        test_branch_incorrect_prediction_nt();


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
