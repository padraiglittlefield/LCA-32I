`timescale 1ns / 1ns
import CORE_PKG::*;

/*
    Template for my personal testbenches, with clock and check_assert
*/
module tb_scheduler;
    localparam CLK_PERIOD = 20;
    localparam DUTY_CYCLE = 0.5;
    
    logic clk;
    logic rst;
    integer cycle_count = 0;
    
    // DUT signals
    
    logic [RS_ENTRIES-1:0] local_ready_mask;
    logic [(RS_ENTRIES * NUM_FUS)-1:0] global_ready_mask;
    dispatch_scheduler_if disp_if();
    execute_scheduler_if exec_if();
    scheduler_reg_read_if reg_read_if();
    
    // Test tracking
    integer pass_count = 0;
    integer fail_count = 0;
    
    // Instantiate DUT
    scheduler dut (
        .clk(clk),
        .rst(rst),
        .local_ready_mask(local_ready_mask),
        .global_ready_mask(global_ready_mask),
        .disp_if(disp_if),
        .exec_if(exec_if),
        .reg_read_if(reg_read_if)
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
        $dumpfile("tb_scheduler.vcd");
        $dumpvars(0, tb_scheduler);
    end
    
    // Task: Initialize signals
    task init_signals();
        begin
            clk = 0;
            rst = 1;
            
            // Init DUT input signals
        end
    endtask
    
    // Task: Check assertion and update counters
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
    
    // Task: Reset sequence
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
    
    
    // Task: Dispatch an entry
    task dispatch_entry(
        input [(RS_ENTRIES * NUM_FUS)-1:0] dep_mask,
        input [$clog2(NUM_PREGS)-1:0] dst_preg,
        input [$clog2(NUM_PREGS)-1:0] src1_preg,
        input [$clog2(NUM_PREGS)-1:0] src2_preg,
        input [31:0] pc_val,
        input [31:0] imm
    );
        begin
            disp_packet_t new_disp_pkt;
            new_disp_pkt.dst_preg = dst_preg;
            new_disp_pkt.src1_preg = src1_preg;
            new_disp_pkt.src2_preg = src2_preg;
            new_disp_pkt.imm_val = imm;
            new_disp_pkt.instr_valid = 1'b1;
            new_disp_pkt.pc = pc_val;

            disp_if.disp_pkt = new_disp_pkt;
            disp_if.disp_valid = 1;
            disp_if.dependency_mask = dep_mask;
            @(negedge clk);
            $display("  Dispatched to entry: %0d, Full: %0b, Cycle: %0d", disp_if.rs_entry_idx, disp_if.rs_full, cycle_count);
            disp_if.disp_valid = 0;
            @(negedge clk);
        end
    endtask

    // Task: Set global ready mask to clear dependencies
    task set_global_ready(input [(RS_ENTRIES * NUM_FUS)-1:0] mask);
        begin
            global_ready_mask = mask;
            @(negedge clk);
            $display("  Global ready mask updated: %b, Reqs: %b", global_ready_mask, dut.reqs_in);
        end
    endtask

    
    // Test 1: Dispatch with no dependencies
    task test_dispatch_no_deps();
        begin
            $display("\n[Test 1] Dispatch entry with no dependencies");
            dispatch_entry('0, 8'd10, 8'd20, 8'd30, 32'h1000, 32'h0);
            @(posedge clk);
            // $display("\n[Test 1] Dispatch entry with no dependencies");
            $display("Current Clock Cycle: %0d", cycle_count);
            check_assertion("Entry should be valid after dispatch", dut.wakeup.entry_valid[0] == 1'b1);
            check_assertion("Should have request after dispatch with no deps", dut.reqs_in[0] == 1'b1);
            check_assertion("Payload RAM should store dispatch packet", dut.payload_ram[0].dst_preg == 8'd10);
            // @(posedge clk);
            // check_assertion("Entry should have been granted", dut.grant_valid == 1'b1);
        end
    endtask

     // Test 2: Select grants ready entry
    task test_select_grant();
        logic [$clog2(RS_ENTRIES)-1:0] granted_entry;
        begin
            $display("\n[Test 2] Select should grant ready entry");
            $display("Current Clock Cycle: %0d", cycle_count);
            check_assertion("Grant should be valid", dut.grant_valid == 1'b1);
            check_assertion("Granted entry should not request anymore", dut.reqs_out[granted_entry] == 1'b0);
            check_assertion("Fire valid should be asserted to reg read", reg_read_if.fire_valid == 1'b1);
        end
    endtask

    // Test 3: Register read receives correct payload
    task test_reg_read_payload();
        begin
            $display("\n[Test 3] Register read receives correct payload");
            $display("Current Clock Cycle: %0d", cycle_count);
            check_assertion("Payload dst_preg should match", reg_read_if.sched_pkt.dst_preg == 8'd10);
            check_assertion("Payload src1_preg should match", reg_read_if.sched_pkt.src1_preg == 8'd20);
            check_assertion("Payload src2_preg should match", reg_read_if.sched_pkt.src2_preg == 8'd30);
            check_assertion("Payload PC should match", reg_read_if.sched_pkt.pc == 32'h1000);
        end
    endtask

    logic [$clog2(RS_ENTRIES)-1:0] test5_dispatched_entry;
    // Test 4: Dispatch with dependencies
    task test_dispatch_with_deps();
        begin
            $display("\n[Test 4] Dispatch entry with dependencies");
            $display("Current Clock Cycle: %0d", cycle_count);
            test5_dispatched_entry = disp_if.rs_entry_idx;
            dispatch_entry({{(RS_ENTRIES*NUM_FUS-2){1'b0}}, 2'b11}, 8'd15, 8'd25, 8'd35, 32'h2000, 32'h100);
            $display("  Reqs (should be blocked by deps): %b", dut.reqs_in);
            check_assertion("Entry with dependencies should not request", dut.reqs_in[test5_dispatched_entry] == 1'b0);
            check_assertion("Entry should be valid", dut.wakeup.entry_valid[test5_dispatched_entry] == 1'b1);
            check_assertion("Payload should be stored", dut.payload_ram[test5_dispatched_entry].dst_preg == 8'd15);
        end
    endtask

    // Test 5: Clear dependencies with global ready mask
    task test_clear_dependencies();
        begin
            
            $display("\n[Test 5] Clear one dependency with global ready mask");
            set_global_ready({{(RS_ENTRIES*NUM_FUS-1){1'b0}}, 1'b1});
            check_assertion("Dependencies should be half cleared",dut.wakeup.dependency_matrix_row[test5_dispatched_entry] != {{(RS_ENTRIES*NUM_FUS-2){1'b0}}, 2'b11});
            $display("Dependency Mask: %0b", dut.wakeup.dependency_matrix_row[test5_dispatched_entry]);
            $display("\n[Test 6] Clear remaining dependency");
            set_global_ready({{(RS_ENTRIES*NUM_FUS-2){1'b0}}, 2'b11});
            check_assertion("All dependencies should be cleared",dut.wakeup.dependency_matrix_row[test5_dispatched_entry] == '0);
            check_assertion("Entry should now request", dut.reqs_out[test5_dispatched_entry] == 1'b1);
            set_global_ready('0);
        end
    endtask

    
    // Test 8: Fill reservation station
    task test_fill_rs();
        integer valid_count;
        integer i;
        logic [$clog2(NUM_PREGS)-1:0] dst_val, src1_val, src2_val;
        logic [31:0] pc_val;
        begin
            $display("\n[Test 7] Fill reservation station to capacity");
            reset_dut();
            
            for (i = 0; i < RS_ENTRIES; i = i + 1) begin
                if (!disp_if.rs_full) begin
                    dst_val = i;
                    src1_val = i + 1;
                    src2_val = i + 2;
                    pc_val = 32'h4000 + (i * 32'h10);
                    dispatch_entry('0, dst_val, src1_val, src2_val, pc_val, 32'h0);
                end else begin
                    $display("  RS Full at entry %0d", i);
                    break;
                end
            end
            
            valid_count = 0;
            for (i = 0; i < RS_ENTRIES; i = i + 1) begin
                if (dut.wakeup.entry_valid[i]) valid_count = valid_count + 1;
            end
            $display("  Valid entries: %0d, RS Full: %0b", valid_count, disp_if.rs_full);
            check_assertion("All RS entries should be valid", valid_count == RS_ENTRIES);
            check_assertion("RS should report full", disp_if.rs_full == 1'b1);
        end
    endtask
    
    // Test 9: Attempt dispatch when full
    task test_dispatch_when_full();
        integer valid_count_before, valid_count_after;
        integer i;
        begin
            $display("\n[Test 8] Attempt dispatch when RS is full");
            
            valid_count_before = 0;
            for (i = 0; i < RS_ENTRIES; i = i + 1) begin
                if (dut.wakeup.entry_valid[i]) valid_count_before = valid_count_before + 1;
            end
            
            disp_if.disp_valid = 1;
            disp_if.dependency_mask = '0;
            disp_if.disp_pkt.dst_preg = 8'd99;
            disp_if.disp_pkt.instr_valid = 1'b1;
            @(negedge clk);
            $display("  Full: %0b (should reject dispatch)", disp_if.rs_full);
            disp_if.disp_valid = 0;
            @(negedge clk);
            
            valid_count_after = 0;
            for (i = 0; i < RS_ENTRIES; i = i + 1) begin
                if (dut.wakeup.entry_valid[i]) valid_count_after = valid_count_after + 1;
            end
            
            check_assertion("No new entry added when full", valid_count_before == valid_count_after);
            check_assertion("RS should still be full", disp_if.rs_full == 1'b1);
        end
    endtask
    
    // Test 10: Verify payload RAM integrity
    task test_payload_ram_integrity();
        begin
            $display("\n[Test 9] Verify payload RAM integrity");
            reset_dut();
            
            // Dispatch unique entries
            dispatch_entry('0, 8'd6, 8'd7, 8'd8, 32'hA000, 32'h11);
            dispatch_entry('0, 8'd16, 8'd17, 8'd18, 32'hB000, 32'h22);
            dispatch_entry('0, 8'd26, 8'd27, 8'd28, 32'hC000, 32'h33);
            
            check_assertion("Entry 0 dst_preg correct", dut.payload_ram[0].dst_preg == 8'd6);
            check_assertion("Entry 1 dst_preg correct", dut.payload_ram[1].dst_preg == 8'd16);
            check_assertion("Entry 2 dst_preg correct", dut.payload_ram[2].dst_preg == 8'd26);
            check_assertion("Entry 0 PC correct", dut.payload_ram[0].pc == 32'hA000);
            check_assertion("Entry 1 imm correct", dut.payload_ram[1].imm_val == 32'h22);
        end
    endtask


    // Main test sequence
    initial begin
        init_signals();
        
        $display("=== Example Module Testbench ===");
        reset_dut();
        
        // call tests here
        test_dispatch_no_deps();
        test_select_grant();
        test_reg_read_payload();
        test_dispatch_with_deps();
        test_clear_dependencies();
        test_fill_rs();
        test_dispatch_when_full();
        test_payload_ram_integrity();
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
