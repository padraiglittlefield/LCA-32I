`timescale 1ns / 1ns
import CORE_PKG::*;

module tb_wakeup;
    localparam CLK_PERIOD = 20;
    localparam DUTY_CYCLE = 0.5;
    
    logic clk;
    logic rst;
    integer cycle_count = 0;
    
    // DUT signals
    logic disp_valid;
    logic [(RS_ENTRIES * NUM_FUS)-1:0] dependency_mask;
    logic [$clog2(RS_ENTRIES)-1:0] free_entry_out;
    logic full_out;
    
    logic [RS_ENTRIES-1:0] reqs;
    logic [$clog2(RS_ENTRIES)-1:0] grant;
    logic grant_valid;
    
    logic [(RS_ENTRIES * NUM_FUS)-1:0] ready_mask;
    logic [$clog2(RS_ENTRIES)-1:0] retire_entry;
    logic retire_valid;
    
    // Test tracking
    integer pass_count = 0;
    integer fail_count = 0;
    
    // Instantiate DUT
    wakeup dut (
        .clk(clk),
        .rst(rst),
        .disp_valid(disp_valid),
        .dependency_mask(dependency_mask),
        .free_entry_out(free_entry_out),
        .full_out(full_out),
        .reqs(reqs),
        .grant(grant),
        .grant_valid(grant_valid),
        .ready_mask(ready_mask),
        .retire_entry(retire_entry),
        .retire_valid(retire_valid)
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
        $dumpfile("tb_wakeup.vcd");
        $dumpvars(0, tb_wakeup);
    end
    
    // Initialize signals
    task init_signals();
        begin
            clk = 0;
            rst = 1;
            disp_valid = 0;
            dependency_mask = '0;
            grant = 0;
            grant_valid = 0;
            ready_mask = '0;
            retire_entry = 0;
            retire_valid = 0;
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
    
    // Grant a ready entry
    task grant_entry();
        begin
            if (reqs != 0) begin
                grant_valid = 1;
                grant = 0;
                for (int i = 0; i < RS_ENTRIES; i++) begin
                    if (reqs[i]) begin
                        grant = i;
                        break;
                    end
                end
                $display("  Granting entry: %0d", grant);
                @(negedge clk);
                grant_valid = 0;
                $display("  Reqs after grant: %b", reqs);
                @(negedge clk);
            end else begin
                $display("  No requests to grant");
            end
        end
    endtask
    
    // Retire an entry
    task retire_entry_task(input [$clog2(RS_ENTRIES)-1:0] entry);
        begin
            retire_valid = 1;
            retire_entry = entry;
            @(negedge clk);
            retire_valid = 0;
            $display("  Entry %0d retired, Full: %0b", entry, full_out);
            @(negedge clk);
        end
    endtask
    
    // Set ready mask
    task set_ready(input [(RS_ENTRIES * NUM_FUS)-1:0] mask);
        begin
            ready_mask = mask;
            @(negedge clk);
            $display("  Ready mask updated: %b, Reqs: %b", ready_mask, reqs);
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
    
    // Test 2: Grant and issue ready entry
    task test_grant_ready();
        logic [$clog2(RS_ENTRIES)-1:0] granted_entry;
        begin
            $display("\n[Test 2] Grant ready entry");
            granted_entry = grant;
            grant_entry();
            check_assertion("Granted entry should not request anymore", reqs[granted_entry] == 1'b0);
            check_assertion("entry_granted flag should be set", dut.entry_granted[granted_entry] == 1'b1);
        end
    endtask
    
    // Test 3: Retire completed entry
    task test_retire();
        logic [$clog2(RS_ENTRIES)-1:0] retired_entry;
        begin
            $display("\n[Test 3] Retire completed entry");
            retired_entry = grant;
            retire_entry_task(grant);
            check_assertion("Retired entry should be invalid", dut.entry_valid[retired_entry] == 1'b0);
            check_assertion("Retired entry should not be granted", dut.entry_granted[retired_entry] == 1'b0);
        end
    endtask
    
    // Test 4: Dispatch with dependencies
    task test_dispatch_with_deps();
        logic [$clog2(RS_ENTRIES)-1:0] dispatched_entry;
        begin
            $display("\n[Test 4] Dispatch entry with dependencies");
            dispatched_entry = free_entry_out;
            dispatch_entry({{(RS_ENTRIES*NUM_FUS-2){1'b0}}, 2'b11});
            $display("  Reqs (blocked by deps): %b", reqs);
            check_assertion("Entry with dependencies should not request", reqs[dispatched_entry] == 1'b0);
            check_assertion("Dependency matrix should be non-zero", dut.dependency_matrix_row[dispatched_entry] != '0);
        end
    endtask
    
    // Test 5: Clear dependencies incrementally
    task test_clear_dependencies();
        logic [$clog2(RS_ENTRIES)-1:0] dep_entry;
        begin
            // Find the entry with dependencies
            for (int i = 0; i < RS_ENTRIES; i++) begin
                if (dut.entry_valid[i] && dut.dependency_matrix_row[i] != '0) begin
                    dep_entry = i;
                    break;
                end
            end
            
            $display("\n[Test 5] Clear one dependency");
            set_ready({{(RS_ENTRIES*NUM_FUS-1){1'b0}}, 1'b1});
            check_assertion("Dependencies should be partially cleared", dut.dependency_matrix_row[dep_entry] != {{(RS_ENTRIES*NUM_FUS-2){1'b0}}, 2'b11});
            
            $display("\n[Test 6] Clear remaining dependency");
            set_ready({{(RS_ENTRIES*NUM_FUS-2){1'b0}}, 2'b11});
            check_assertion("All dependencies should be cleared", dut.dependency_matrix_row[dep_entry] == '0);
            check_assertion("Entry should now request", reqs[dep_entry] == 1'b1);
            
            ready_mask = '0;
            @(negedge clk);
        end
    endtask
    
    // Test 7: Fill reservation station
    task test_fill_rs();
        integer valid_count;
        begin
            $display("\n[Test 7] Fill reservation station");
            for (int i = 0; i < RS_ENTRIES; i++) begin
                if (!full_out) begin
                    dispatch_entry('0);
                end
            end
            $display("  RS Full: %0b, Reqs: %b", full_out, reqs);
            
            valid_count = 0;
            for (int i = 0; i < RS_ENTRIES; i++) begin
                if (dut.entry_valid[i]) valid_count++;
            end
            check_assertion("All RS entries should be valid", valid_count == RS_ENTRIES);
            check_assertion("RS should report full", full_out == 1'b1);
        end
    endtask
    
    // Test 8: Attempt dispatch when full
    task test_dispatch_when_full();
        integer valid_count_before, valid_count_after;
        begin
            $display("\n[Test 8] Attempt dispatch when full");
            
            valid_count_before = 0;
            for (int i = 0; i < RS_ENTRIES; i++) begin
                if (dut.entry_valid[i]) valid_count_before++;
            end
            
            disp_valid = 1;
            dependency_mask = '0;
            @(negedge clk);
            $display("  Full: %0b (should reject dispatch)", full_out);
            disp_valid = 0;
            @(negedge clk);
            
            valid_count_after = 0;
            for (int i = 0; i < RS_ENTRIES; i++) begin
                if (dut.entry_valid[i]) valid_count_after++;
            end
            
            check_assertion("No new entry should be added when full", valid_count_before == valid_count_after);
            check_assertion("RS should still be full", full_out == 1'b1);
        end
    endtask
    
    // Test 9: Grant and retire multiple entries
    task test_grant_retire_multiple();
        begin
            $display("\n[Test 9] Grant and retire multiple entries to free space");
            for (int i = 0; i < (RS_ENTRIES/2); i++) begin
                if (reqs != 0) begin
                    grant_entry();
                    retire_entry_task(grant);
                end
            end
            $display("  RS Full after retires: %0b", full_out);
            check_assertion("RS should no longer be full", full_out == 1'b0);
        end
    endtask
    
    // Test 10: Verify can dispatch after freeing
    task test_dispatch_after_free();
        logic [$clog2(RS_ENTRIES)-1:0] new_entry;
        begin
            $display("\n[Test 10] Dispatch after freeing entries");
            new_entry = free_entry_out;
            dispatch_entry('0);
            check_assertion("Should successfully dispatch to freed entry", dut.entry_valid[new_entry] == 1'b1);
            check_assertion("New entry should request", reqs[new_entry] == 1'b1);
        end
    endtask
    
    // Main test sequence
    initial begin
        init_signals();
        
        $display("=== Wakeup Module Testbench ===");
        $display("RS_ENTRIES: %0d, NUM_FUS: %0d", RS_ENTRIES, NUM_FUS);
        
        reset_dut();
        
        test_dispatch_no_deps();
        test_grant_ready();
        test_retire();
        test_dispatch_with_deps();
        test_clear_dependencies();
        test_fill_rs();
        test_dispatch_when_full();
        test_grant_retire_multiple();
        test_dispatch_after_free();
        
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