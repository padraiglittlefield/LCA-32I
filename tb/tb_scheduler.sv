`timescale 1ns / 1ns
import CORE_PKG::*;

module tb_scheduler;
    `include "tb_test_select.svh"
    localparam CLK_PERIOD = 20;
    localparam DUTY_CYCLE = 0.5;
    
    logic clk;
    logic rst;
    integer cycle_count = 0;
    
    // DUT signals
    logic [RS_ENTRIES-1:0]              local_ready_mask;
    logic [(RS_ENTRIES * NUM_FUS)-1:0]  global_ready_mask;

    // Dispatch ports
    logic                               disp_valid;
    disp_packet_t                       disp_pkt;
    logic [(RS_ENTRIES * NUM_FUS)-1:0]  dependency_mask;
    logic [$clog2(RS_ENTRIES)-1:0]      rs_entry_idx;
    logic                               rs_full;

    // Register Read ports
    logic                               rr_fire_valid;
    disp_packet_t                       rr_pkt;
    
    // Test tracking
    integer pass_count = 0;
    integer fail_count = 0;
    
    // Instantiate DUT
    scheduler dut (
        .clk(clk),
        .rst(rst),
        .local_ready_mask(local_ready_mask),
        .global_ready_mask(global_ready_mask),
        .disp_valid_i(disp_valid),
        .disp_pkt_i(disp_pkt),
        .dependency_mask_i(dependency_mask),
        .rs_entry_idx_o(rs_entry_idx),
        .rs_full_o(rs_full),
        .rr_fire_valid_o(rr_fire_valid),
        .rr_pkt_o(rr_pkt)
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
        $dumpfile(`DUMPFILE);
        $dumpvars(0, tb_scheduler);
    end
    
    // Initialize signals
    task init_signals();
        begin
            clk         = 0;
            rst         = 1;
            clear_inputs();
        end
    endtask

    // Drive every DUT input to its idle value (called on each reset)
    task clear_inputs();
        begin
            disp_valid  = 0;
            disp_pkt    = '0;
            dependency_mask  = '0;
            global_ready_mask = '0;
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
            clear_inputs();
            rst = 1;
            @(negedge clk);
            @(negedge clk);
            rst = 0;
            @(negedge clk);
            $display("[RESET] Reset complete\n");
        end
    endtask
    
    // Dispatch an entry
    task dispatch_entry(
        input [(RS_ENTRIES * NUM_FUS)-1:0] dep_mask,
        input [$clog2(NUM_PREGS)-1:0] dst_preg,
        input [$clog2(NUM_PREGS)-1:0] src1_preg,
        input [$clog2(NUM_PREGS)-1:0] src2_preg,
        input [31:0] pc_val,
        input [31:0] imm
    );
        begin
            disp_pkt.dst_preg    = dst_preg;
            disp_pkt.src1_preg   = src1_preg;
            disp_pkt.src2_preg   = src2_preg;
            disp_pkt.imm_val     = imm;
            disp_pkt.instr_valid = 1'b1;
            disp_pkt.pc          = pc_val;

            disp_valid      = 1;
            dependency_mask = dep_mask;
            @(negedge clk);
            $display("  Dispatched to entry: %0d, Full: %0b, Cycle: %0d", rs_entry_idx, rs_full, cycle_count);
            disp_valid = 0;
            @(negedge clk);
        end
    endtask

    // Set global ready mask to clear dependencies
    task set_global_ready(input [(RS_ENTRIES * NUM_FUS)-1:0] mask);
        begin
            global_ready_mask = mask;
            @(negedge clk);
            $display("  Global ready mask updated: %b, Reqs: %b", global_ready_mask, dut.reqs_in);
        end
    endtask

    // ===== Test Setup Helpers ===== //
    // Shared by the tests that need the same starting state, so each test can
    // build it from reset instead of relying on the previous test.

    // Dispatch the dependency-free entry that tests 1-3 follow through select and reg read
    task dispatch_no_deps_entry();
        begin
            dispatch_entry('0, 8'd10, 8'd20, 8'd30, 32'h1000, 32'h0);
            @(posedge clk);
        end
    endtask

    logic [$clog2(RS_ENTRIES)-1:0] test5_dispatched_entry;

    // Dispatch the entry waiting on two producers that tests 4-5 use
    task dispatch_dep_entry();
        begin
            test5_dispatched_entry = rs_entry_idx;
            dispatch_entry({{(RS_ENTRIES*NUM_FUS-2){1'b0}}, 2'b11}, 8'd15, 8'd25, 8'd35, 32'h2000, 32'h100);
        end
    endtask

    // Dispatch dependency-free entries until the RS is full
    task fill_rs();
        integer i;
        logic [$clog2(NUM_PREGS)-1:0] dst_val, src1_val, src2_val;
        logic [31:0] pc_val;
        begin
            for (i = 0; i < RS_ENTRIES; i = i + 1) begin
                if (!rs_full) begin
                    dst_val  = i;
                    src1_val = i + 1;
                    src2_val = i + 2;
                    pc_val   = 32'h4000 + (i * 32'h10);
                    dispatch_entry('0, dst_val, src1_val, src2_val, pc_val, 32'h0);
                end else begin
                    $display("  RS Full at entry %0d", i);
                    break;
                end
            end
        end
    endtask

    // Test 1: Dispatch with no dependencies
    task test_dispatch_no_deps();
        begin
            $display("\n[Test 1] Dispatch entry with no dependencies");
            dispatch_no_deps_entry();
            $display("Current Clock Cycle: %0d", cycle_count);
            check_assertion("Entry should be valid after dispatch",      dut.wakeup.entry_valid[0] == 1'b1);
            check_assertion("Should have request after dispatch with no deps", dut.reqs_in[0] == 1'b1);
            check_assertion("Payload RAM should store dispatch packet",  dut.payload_ram[0].dst_preg == 8'd10);
        end
    endtask

    // Test 2: Select grants ready entry
    task test_select_grant();
        logic [$clog2(RS_ENTRIES)-1:0] granted_entry;
        begin
            $display("\n[Test 2] Select should grant ready entry");
            dispatch_no_deps_entry();
            $display("Current Clock Cycle: %0d", cycle_count);
            check_assertion("Grant should be valid",                          dut.grant_valid == 1'b1);
            check_assertion("Granted entry should not request anymore",       dut.reqs_out[granted_entry] == 1'b0);
            @(posedge clk); 
            check_assertion("Fire valid should be asserted to reg read",      rr_fire_valid == 1'b1);
        end
    endtask

    // Test 3: Register read receives correct payload
    task test_reg_read_payload();
        begin
            $display("\n[Test 3] Register read receives correct payload");
            dispatch_no_deps_entry();
            @(posedge clk);     // entry fires to reg read (test 2)
            $display("Current Clock Cycle: %0d", cycle_count);
            check_assertion("Payload dst_preg should match",  rr_pkt.dst_preg  == 8'd10);
            check_assertion("Payload src1_preg should match", rr_pkt.src1_preg == 8'd20);
            check_assertion("Payload src2_preg should match", rr_pkt.src2_preg == 8'd30);
            check_assertion("Payload PC should match",        rr_pkt.pc        == 32'h1000);
        end
    endtask

    // Test 4: Dispatch with dependencies
    task test_dispatch_with_deps();
        begin
            $display("\n[Test 4] Dispatch entry with dependencies");
            $display("Current Clock Cycle: %0d", cycle_count);
            dispatch_dep_entry();
            $display("  Reqs (should be blocked by deps): %b", dut.reqs_in);
            check_assertion("Entry with dependencies should not request", dut.reqs_in[test5_dispatched_entry] == 1'b0);
            check_assertion("Entry should be valid",                      dut.wakeup.entry_valid[test5_dispatched_entry] == 1'b1);
            check_assertion("Payload should be stored",                   dut.payload_ram[test5_dispatched_entry].dst_preg == 8'd15);
        end
    endtask

    // Test 5: Clear dependencies with global ready mask
    task test_clear_dependencies();
        begin
            $display("\n[Test 5] Clear one dependency with global ready mask");
            dispatch_dep_entry();
            set_global_ready({{(RS_ENTRIES*NUM_FUS-1){1'b0}}, 1'b1});
            check_assertion("Dependencies should be half cleared", dut.wakeup.dependency_matrix_row[test5_dispatched_entry] != {{(RS_ENTRIES*NUM_FUS-2){1'b0}}, 2'b11});
            $display("Dependency Mask: %0b", dut.wakeup.dependency_matrix_row[test5_dispatched_entry]);
            $display("\n[Test 6] Clear remaining dependency");
            set_global_ready({{(RS_ENTRIES*NUM_FUS-2){1'b0}}, 2'b11});
            check_assertion("All dependencies should be cleared",  dut.wakeup.dependency_matrix_row[test5_dispatched_entry] == '0);
            check_assertion("Entry should now request",            dut.reqs_out[test5_dispatched_entry] == 1'b1);
            set_global_ready('0);
        end
    endtask

    // Test 7: Fill reservation station
    task test_fill_rs();
        integer valid_count;
        integer i;
        begin
            $display("\n[Test 7] Fill reservation station to capacity");
            fill_rs();
            
            valid_count = 0;
            for (i = 0; i < RS_ENTRIES; i = i + 1) begin
                if (dut.wakeup.entry_valid[i]) valid_count = valid_count + 1;
            end
            $display("  Valid entries: %0d, RS Full: %0b", valid_count, rs_full);
            check_assertion("All RS entries should be valid", valid_count == RS_ENTRIES);
            check_assertion("RS should report full",          rs_full == 1'b1);
        end
    endtask
    
    // Test 8: Attempt dispatch when full
    task test_dispatch_when_full();
        integer valid_count_before, valid_count_after;
        integer i;
        begin
            $display("\n[Test 8] Attempt dispatch when RS is full");
            fill_rs();
            
            valid_count_before = 0;
            for (i = 0; i < RS_ENTRIES; i = i + 1) begin
                if (dut.wakeup.entry_valid[i]) valid_count_before = valid_count_before + 1;
            end
            
            disp_valid              = 1;
            dependency_mask         = '0;
            disp_pkt.dst_preg       = 8'd99;
            disp_pkt.instr_valid    = 1'b1;
            @(negedge clk);
            $display("  Full: %0b (should reject dispatch)", rs_full);
            disp_valid = 0;
            @(negedge clk);
            
            valid_count_after = 0;
            for (i = 0; i < RS_ENTRIES; i = i + 1) begin
                if (dut.wakeup.entry_valid[i]) valid_count_after = valid_count_after + 1;
            end
            
            check_assertion("No new entry added when full", valid_count_before == valid_count_after);
            check_assertion("RS should still be full",      rs_full == 1'b1);
        end
    endtask
    
    // Test 9: Verify payload RAM integrity
    task test_payload_ram_integrity();
        begin
            $display("\n[Test 9] Verify payload RAM integrity");
            
            dispatch_entry('0, 8'd6,  8'd7,  8'd8,  32'hA000, 32'h11);
            dispatch_entry('0, 8'd16, 8'd17, 8'd18, 32'hB000, 32'h22);
            dispatch_entry('0, 8'd26, 8'd27, 8'd28, 32'hC000, 32'h33);
            
            check_assertion("Entry 0 dst_preg correct", dut.payload_ram[0].dst_preg == 8'd6);
            check_assertion("Entry 1 dst_preg correct", dut.payload_ram[1].dst_preg == 8'd16);
            check_assertion("Entry 2 dst_preg correct", dut.payload_ram[2].dst_preg == 8'd26);
            check_assertion("Entry 0 PC correct",       dut.payload_ram[0].pc       == 32'hA000);
            check_assertion("Entry 1 imm correct",      dut.payload_ram[1].imm_val  == 32'h22);
        end
    endtask

    // Main test sequence
    initial begin
        init_signals();
        
        $display("=== Scheduler Testbench ===");
        
        `RUN_TEST(test_dispatch_no_deps)
        `RUN_TEST(test_select_grant)
        `RUN_TEST(test_reg_read_payload)
        `RUN_TEST(test_dispatch_with_deps)
        `RUN_TEST(test_clear_dependencies)
        `RUN_TEST(test_fill_rs)
        `RUN_TEST(test_dispatch_when_full)
        `RUN_TEST(test_payload_ram_integrity)
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