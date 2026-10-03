`timescale 1ns/1ns

import CORE_PKG::*;


module tb_load_data_queue;
    `include "tb_test_select.svh"
    // ===== Testbench Setup ===== //


    // generate clock
    localparam CLK_PERIOD = 20;
    localparam DUTY_CYCLE = 0.5;

    logic clk;
    logic rst;
    logic flush;
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
        $dumpfile(`DUMPFILE);
        $dumpvars(0,tb_load_data_queue);
    end

    localparam LDQ_IDX_W = $clog2(LDQ_ENTRIES);

    logic                           disp_vld_i;
    logic [$clog2(SDQ_ENTRIES):0]   disp_sdq_marker_i;
    logic [LDQ_IDX_W-1:0]           ldq_disp_idx_o;
    logic                           ldq_full_o;
    logic                           exec_vld_i;
    logic [LDQ_IDX_W-1:0]           exec_ldq_idx_i;
    logic [31:0]                    exec_addr_i;
    logic [$clog2(ROB_ENTRIES)-1:0] exec_rob_idx_i;
    logic                           issue_en_i;
    logic                           issue_ack_i;
    ldq_entry_t                     issue_entry_o;
    logic                           issue_vld_o;

    load_data_queue dut (
        .clk_i(clk),
        .rst_i(rst),
        .flush_i(flush),
        .disp_vld_i(disp_vld_i),
        .disp_sdq_marker_i(disp_sdq_marker_i),
        .ldq_disp_idx_o(ldq_disp_idx_o),
        .ldq_full_o(ldq_full_o),
        .exec_vld_i(exec_vld_i),
        .exec_ldq_idx_i(exec_ldq_idx_i),
        .exec_addr_i(exec_addr_i),
        .exec_rob_idx_i(exec_rob_idx_i),
        .issue_en_i(issue_en_i),
        .issue_ack_i(issue_ack_i),
        .issue_entry_o(issue_entry_o),
        .issue_vld_o(issue_vld_o)
    );

    // ===== Helper Methods ==== //

    task init_signals();
        begin
            clk = 0;
            rst = 0;
            flush = 0;
            disp_vld_i = 0;
            disp_sdq_marker_i = 0;
            exec_vld_i = 0;
            exec_ldq_idx_i = 0;
            exec_addr_i = 0;
            exec_rob_idx_i = 0;
            issue_en_i = 0;
            issue_ack_i = 0;
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
            init_signals_inputs();
            rst = 1;
            @(negedge clk);
            @(negedge clk);
            rst = 0;
            @(negedge clk);
            $display("[RESET] Reset complete\n");
        end
    endtask

    task init_signals_inputs();
        begin
            flush = 0;
            disp_vld_i = 0;
            disp_sdq_marker_i = 0;
            exec_vld_i = 0;
            exec_ldq_idx_i = 0;
            exec_addr_i = 0;
            exec_rob_idx_i = 0;
            issue_en_i = 0;
            issue_ack_i = 0;
        end
    endtask

    // All stimulus tasks start and end on a negedge.

    task automatic dispatch_entry(input logic [$clog2(SDQ_ENTRIES):0] sdq_marker, output logic [LDQ_IDX_W-1:0] idx);
        begin
            disp_vld_i = 1;
            disp_sdq_marker_i = sdq_marker;
            #1;
            idx = ldq_disp_idx_o;
            @(negedge clk);
            disp_vld_i = 0;
            disp_sdq_marker_i = 0;
        end
    endtask

    task update_addr(input logic [LDQ_IDX_W-1:0] idx, input logic [31:0] addr, input logic [$clog2(ROB_ENTRIES)-1:0] rob_idx);
        begin
            exec_vld_i = 1;
            exec_ldq_idx_i = idx;
            exec_addr_i = addr;
            exec_rob_idx_i = rob_idx;
            @(negedge clk);
            exec_vld_i = 0;
            exec_ldq_idx_i = 0;
            exec_addr_i = 0;
            exec_rob_idx_i = 0;
        end
    endtask

    // Look at the entry that would issue (issue_en held high), without acking
    task automatic peek_issue(output logic vld, output ldq_entry_t ent);
        begin
            issue_en_i = 1;
            #1;
            vld = issue_vld_o;
            ent = issue_entry_o;
            issue_en_i = 0;
            #1;
        end
    endtask

    // Issue and acknowledge the oldest-ready entry (starts on a negedge, ends on the next)
    task automatic issue_ack(output logic vld, output ldq_entry_t ent);
        begin
            issue_en_i = 1;
            issue_ack_i = 1;
            #1;
            vld = issue_vld_o;
            ent = issue_entry_o;
            @(negedge clk);
            issue_en_i = 0;
            issue_ack_i = 0;
        end
    endtask

    // ===== Tests ===== //

    task automatic test_reset_state();
        logic vld;
        ldq_entry_t ent;
        begin
            $display("--- test_reset_state ---");
            #1;
            check_assertion("ldq_full_o low after reset", !ldq_full_o);
            check_assertion("First allocation index is 0", ldq_disp_idx_o == '0);
            peek_issue(vld, ent);
            check_assertion("Nothing to issue after reset", !vld);
        end
    endtask

    task automatic test_alloc_indices();
        logic [LDQ_IDX_W-1:0] idx;
        logic ok = 1;
        begin
            $display("--- test_alloc_indices ---");
            for (int i = 0; i < 4; i++) begin
                dispatch_entry(5'(i), idx);
                if (idx != LDQ_IDX_W'(i)) ok = 0;
            end
            check_assertion("Sequential dispatches allocate entries 0..3", ok);
            #1;
            check_assertion("Next allocation index is 4", ldq_disp_idx_o == 4'd4);
        end
    endtask

    task automatic test_no_issue_without_address();
        logic [LDQ_IDX_W-1:0] idx;
        logic vld;
        ldq_entry_t ent;
        begin
            $display("--- test_no_issue_without_address ---");
            dispatch_entry(5'd3, idx);
            repeat (3) @(negedge clk);
            peek_issue(vld, ent);
            check_assertion("Entry without address is not issued", !vld);
        end
    endtask

    task automatic test_issue_after_address();
        logic [LDQ_IDX_W-1:0] idx;
        logic vld;
        ldq_entry_t ent;
        begin
            $display("--- test_issue_after_address ---");
            dispatch_entry(5'd7, idx);
            update_addr(idx, 32'h0000_1234, 4'd9);
            peek_issue(vld, ent);
            check_assertion("Entry with address issues", vld);
            check_assertion("Issued entry has correct address", ent.addr == 32'h0000_1234);
            check_assertion("Issued entry has correct ROB index", ent.rob_entry_idx == 4'd9);
            check_assertion("Issued entry keeps its dispatch sdq marker", ent.sdq_marker == 5'd7);
            check_assertion("Issued entry marked valid and addr_valid", ent.valid && ent.addr_valid);
        end
    endtask

    task automatic test_issue_en_gating();
        logic [LDQ_IDX_W-1:0] idx;
        begin
            $display("--- test_issue_en_gating ---");
            dispatch_entry(5'd0, idx);
            update_addr(idx, 32'h0000_4000, 4'd1);
            issue_en_i = 0;
            #1;
            check_assertion("issue_vld_o low when issue_en_i low", !issue_vld_o);
            check_assertion("issue_entry_o zero when issue_en_i low", issue_entry_o == '0);
            issue_en_i = 1;
            #1;
            check_assertion("issue_vld_o high when issue_en_i high", issue_vld_o);
            issue_en_i = 0;
            @(negedge clk);
        end
    endtask

    task automatic test_ack_clears_entry();
        logic [LDQ_IDX_W-1:0] idx;
        logic vld;
        ldq_entry_t ent;
        begin
            $display("--- test_ack_clears_entry ---");
            dispatch_entry(5'd0, idx);
            update_addr(idx, 32'h0000_5000, 4'd2);

            // issue without ack: entry must stay
            issue_en_i = 1;
            @(negedge clk);
            issue_en_i = 0;
            peek_issue(vld, ent);
            check_assertion("Unacked issue leaves entry in LDQ", vld && ent.addr == 32'h0000_5000);

            issue_ack(vld, ent);
            check_assertion("Acked issue returns the entry", vld && ent.addr == 32'h0000_5000);
            peek_issue(vld, ent);
            check_assertion("Acked entry removed from LDQ", !vld);
            #1;
            check_assertion("Freed entry is reallocated next", ldq_disp_idx_o == idx);
        end
    endtask

    task automatic test_issue_priority();
        logic [LDQ_IDX_W-1:0] idx [4];
        logic vld;
        ldq_entry_t ent;
        begin
            $display("--- test_issue_priority ---");
            for (int i = 0; i < 4; i++) dispatch_entry(5'd0, idx[i]);
            // resolve addresses out of order: 2, then 3; entry 0 and 1 stay unresolved
            update_addr(idx[2], 32'h0000_0200, 4'd2);
            update_addr(idx[3], 32'h0000_0300, 4'd3);
            issue_ack(vld, ent);
            check_assertion("Ready entry issues ahead of unresolved older entries", vld && ent.addr == 32'h0000_0200);
            update_addr(idx[0], 32'h0000_0000, 4'd0);
            issue_ack(vld, ent);
            check_assertion("Lowest-index ready entry issues first", vld && ent.addr == 32'h0000_0000);
            issue_ack(vld, ent);
            check_assertion("Remaining ready entry issues", vld && ent.addr == 32'h0000_0300);
            peek_issue(vld, ent);
            check_assertion("Unresolved entry still not issued", !vld);
        end
    endtask

    task automatic test_fill_and_full();
        logic [LDQ_IDX_W-1:0] idx;
        logic vld;
        ldq_entry_t ent;
        logic ok = 1;
        int n = 0;
        begin
            $display("--- test_fill_and_full ---");
            for (int i = 0; i < LDQ_ENTRIES; i++) begin
                #1;
                if (ldq_full_o) ok = 0;
                dispatch_entry(5'd0, idx);
            end
            #1;
            check_assertion("ldq_full_o low until the last entry", ok);
            check_assertion("ldq_full_o asserted with LDQ_ENTRIES entries", ldq_full_o);

            // resolve every address, then attempt an overflow allocation
            for (int i = 0; i < LDQ_ENTRIES; i++) update_addr(LDQ_IDX_W'(i), 32'h1000_0000 + 32'(i), 4'(i));
            dispatch_entry(5'd0, idx);

            ok = 1;
            for (int i = 0; i < LDQ_ENTRIES + 2; i++) begin
                issue_ack(vld, ent);
                if (!vld) break;
                if (ent.addr != 32'h1000_0000 + 32'(n)) ok = 0;
                n++;
            end
            check_assertion("Exactly LDQ_ENTRIES loads issue from a full LDQ", n == LDQ_ENTRIES);
            check_assertion("Loads issue in index order with correct addresses", ok);
            #1;
            check_assertion("ldq_full_o clears once drained", !ldq_full_o);
        end
    endtask

    task automatic test_full_then_free_one();
        logic [LDQ_IDX_W-1:0] idx;
        logic vld;
        ldq_entry_t ent;
        begin
            $display("--- test_full_then_free_one ---");
            for (int i = 0; i < LDQ_ENTRIES; i++) dispatch_entry(5'd0, idx);
            update_addr(4'd5, 32'h0000_0555, 4'd5);
            issue_ack(vld, ent);
            #1;
            check_assertion("Freeing one entry clears ldq_full_o", !ldq_full_o);
            check_assertion("Freed entry index offered for allocation", ldq_disp_idx_o == 4'd5);
            dispatch_entry(5'd0, idx);
            #1;
            check_assertion("Refilling the freed entry sets ldq_full_o again", ldq_full_o);
        end
    endtask

    task automatic test_alloc_and_exec_same_cycle();
        logic [LDQ_IDX_W-1:0] idx0, idx1;
        logic vld;
        ldq_entry_t ent;
        begin
            $display("--- test_alloc_and_exec_same_cycle ---");
            dispatch_entry(5'd1, idx0);
            // allocate entry 1 while resolving entry 0
            disp_vld_i = 1;
            disp_sdq_marker_i = 5'd2;
            exec_vld_i = 1;
            exec_ldq_idx_i = idx0;
            exec_addr_i = 32'h0000_0AAA;
            exec_rob_idx_i = 4'd6;
            #1;
            idx1 = ldq_disp_idx_o;
            @(negedge clk);
            init_signals_inputs();
            check_assertion("Same-cycle alloc gets the next index", idx1 == idx0 + 1);
            issue_ack(vld, ent);
            check_assertion("Same-cycle exec update lands", vld && ent.addr == 32'h0000_0AAA && ent.rob_entry_idx == 4'd6 && ent.sdq_marker == 5'd1);
            peek_issue(vld, ent);
            check_assertion("Same-cycle allocated entry waits for its address", !vld);
            update_addr(idx1, 32'h0000_0BBB, 4'd7);
            peek_issue(vld, ent);
            check_assertion("Same-cycle allocated entry keeps its marker", vld && ent.sdq_marker == 5'd2);
        end
    endtask

    task automatic test_flush();
        logic [LDQ_IDX_W-1:0] idx;
        logic vld;
        ldq_entry_t ent;
        begin
            $display("--- test_flush ---");
            for (int i = 0; i < LDQ_ENTRIES; i++) dispatch_entry(5'd0, idx);
            update_addr(4'd0, 32'h0000_F000, 4'd0);
            flush = 1;
            @(negedge clk);
            flush = 0;
            #1;
            check_assertion("Flush clears ldq_full_o", !ldq_full_o);
            check_assertion("Flush resets allocation index to 0", ldq_disp_idx_o == '0);
            peek_issue(vld, ent);
            check_assertion("Flushed entries are not issued", !vld);
        end
    endtask

    task automatic test_flush_blocks_alloc();
        logic vld;
        ldq_entry_t ent;
        begin
            $display("--- test_flush_blocks_alloc ---");
            flush = 1;
            disp_vld_i = 1;
            @(negedge clk);
            flush = 0;
            disp_vld_i = 0;
            #1;
            check_assertion("Dispatch during flush is dropped", ldq_disp_idx_o == '0);
            update_addr(4'd0, 32'h0000_0001, 4'd0);
            peek_issue(vld, ent);
            check_assertion("Exec to a dropped entry does not create an issuable load", !vld);
        end
    endtask

    // ==== Main Test Sequence ==== //
    initial begin
        init_signals();
        $display("=== LDQ Testbench ===");

        `RUN_TEST(test_reset_state)
        `RUN_TEST(test_alloc_indices)
        `RUN_TEST(test_no_issue_without_address)
        `RUN_TEST(test_issue_after_address)
        `RUN_TEST(test_issue_en_gating)
        `RUN_TEST(test_ack_clears_entry)
        `RUN_TEST(test_issue_priority)
        `RUN_TEST(test_fill_and_full)
        `RUN_TEST(test_full_then_free_one)
        `RUN_TEST(test_alloc_and_exec_same_cycle)
        `RUN_TEST(test_flush)
        `RUN_TEST(test_flush_blocks_alloc)

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
