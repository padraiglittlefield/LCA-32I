`timescale 1ns/1ns

import CORE_PKG::*;
module tb_miss_status_history_register;
    // ===== Testbench Setup ===== //


    // generate clock
    localparam CLK_PERIOD = 20;
    localparam DUTY_CYCLE = 0.5;

    localparam LD_ENTS = NUM_MSHR_ENTS/2;
    localparam ST_ENTS = NUM_MSHR_ENTS/2;

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
        $dumpfile("tb_miss_status_history_register.fst");
        $dumpvars(0,tb_miss_status_history_register);
    end

    logic                               ld_alloc_en_i;
    logic [31:0]                        ld_alloc_addr_i;
    logic [$clog2(ROB_ENTRIES)-1:0]     ld_alloc_rob_idx_i;
    logic                               st_alloc_en_i;
    logic [31:0]                        st_alloc_addr_i;
    logic [31:0]                        st_alloc_data_i;
    logic                               ld_full_o;
    logic                               st_full_o;
    logic                               repair_complete_i;
    logic                               repair_ack_i;
    logic                               repair_req_o;
    logic [31:0]                        repair_req_addr_o;
    logic [31:0]                        repair_req_data_o;
    logic [$clog2(ROB_ENTRIES)-1:0]     repair_req_rob_idx_o;
    logic                               repair_is_store_o;

    miss_status_history_register dut (
        .clk_i(clk),
        .rst_i(rst),
        .flush_i(flush),
        .ld_alloc_en_i(ld_alloc_en_i),
        .ld_alloc_addr_i(ld_alloc_addr_i),
        .ld_alloc_rob_idx_i(ld_alloc_rob_idx_i),
        .st_alloc_en_i(st_alloc_en_i),
        .st_alloc_addr_i(st_alloc_addr_i),
        .st_alloc_data_i(st_alloc_data_i),
        .ld_full_o(ld_full_o),
        .st_full_o(st_full_o),
        .repair_complete_i(repair_complete_i),
        .repair_ack_i(repair_ack_i),
        .repair_req_o(repair_req_o),
        .repair_req_addr_o(repair_req_addr_o),
        .repair_req_data_o(repair_req_data_o),
        .repair_req_rob_idx_o(repair_req_rob_idx_o),
        .repair_is_store_o(repair_is_store_o)
    );

    // ===== Helper Methods ==== //

    task init_signals();
        begin
            clk = 0;
            rst = 0;
            flush = 0;
            ld_alloc_en_i = 0;
            ld_alloc_addr_i = 0;
            ld_alloc_rob_idx_i = 0;
            st_alloc_en_i = 0;
            st_alloc_addr_i = 0;
            st_alloc_data_i = 0;
            repair_complete_i = 0;
            repair_ack_i = 0;
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

    // All stimulus tasks start and end on a negedge; the posedge in between consumes the inputs.

    task alloc_ld(input logic [31:0] addr, input logic [$clog2(ROB_ENTRIES)-1:0] rob_idx);
        begin
            ld_alloc_en_i = 1;
            ld_alloc_addr_i = addr;
            ld_alloc_rob_idx_i = rob_idx;
            @(negedge clk);
            ld_alloc_en_i = 0;
            ld_alloc_addr_i = 0;
            ld_alloc_rob_idx_i = 0;
        end
    endtask

    task alloc_st(input logic [31:0] addr, input logic [31:0] data);
        begin
            st_alloc_en_i = 1;
            st_alloc_addr_i = addr;
            st_alloc_data_i = data;
            @(negedge clk);
            st_alloc_en_i = 0;
            st_alloc_addr_i = 0;
            st_alloc_data_i = 0;
        end
    endtask

    // Controller accepts the pending request (ack is only meaningful while repair_req_o is high)
    task ack_repair();
        begin
            repair_ack_i = 1;
            @(negedge clk);
            repair_ack_i = 0;
        end
    endtask

    task complete_repair();
        begin
            repair_complete_i = 1;
            @(negedge clk);
            repair_complete_i = 0;
        end
    endtask

    task do_flush();
        begin
            flush = 1;
            @(negedge clk);
            flush = 0;
        end
    endtask

    // Sample the pending request, then ack and complete it (full controller handshake)
    task automatic service_one(
        output logic                            req,
        output logic                            is_store,
        output logic [31:0]                     addr,
        output logic [31:0]                     data,
        output logic [$clog2(ROB_ENTRIES)-1:0]  rob_idx
    );
        begin
            #1;
            req = repair_req_o;
            is_store = repair_is_store_o;
            addr = repair_req_addr_o;
            data = repair_req_data_o;
            rob_idx = repair_req_rob_idx_o;
            @(negedge clk);
            if (req) begin
                ack_repair();
                complete_repair();
            end
        end
    endtask

    // Service everything pending; returns the number of requests seen
    task automatic drain(output int n);
        logic req, is_store;
        logic [31:0] addr, data;
        logic [$clog2(ROB_ENTRIES)-1:0] rob_idx;
        begin
            n = 0;
            for (int i = 0; i < NUM_MSHR_ENTS + 4; i++) begin
                service_one(req, is_store, addr, data, rob_idx);
                if (!req) break;
                n++;
            end
        end
    endtask

    // ===== Tests ===== //

    task automatic test_reset_state();
        begin
            $display("--- test_reset_state ---");
            #1;
            check_assertion("ld_full_o low after reset", !ld_full_o);
            check_assertion("st_full_o low after reset", !st_full_o);
            check_assertion("No repair request after reset", !repair_req_o);
        end
    endtask

    task automatic test_single_load();
        int n;
        begin
            $display("--- test_single_load ---");
            alloc_ld(32'hFFFF_0000, 4'd7);
            #1;
            check_assertion("Load alloc raises repair_req_o", repair_req_o);
            check_assertion("Load repair is not a store", !repair_is_store_o);
            check_assertion("Load repair address correct", repair_req_addr_o == 32'hFFFF_0000);
            check_assertion("Load repair ROB index correct", repair_req_rob_idx_o == 4'd7);

            // request must persist until acknowledged
            repeat (3) @(negedge clk);
            #1;
            check_assertion("Unacked request persists", repair_req_o && repair_req_addr_o == 32'hFFFF_0000);

            @(negedge clk);
            ack_repair();
            #1;
            check_assertion("repair_req_o drops while repair in flight", !repair_req_o);
            repeat (3) @(negedge clk);
            #1;
            check_assertion("repair_req_o stays low until complete", !repair_req_o);

            @(negedge clk);
            complete_repair();
            #1;
            check_assertion("Completed load entry freed (no re-request)", !repair_req_o);
            @(negedge clk);
            drain(n);
            check_assertion("Nothing left pending after single load", n == 0);
        end
    endtask

    task automatic test_single_store();
        begin
            $display("--- test_single_store ---");
            alloc_st(32'hABCD_0010, 32'h1234_5678);
            #1;
            check_assertion("Store alloc raises repair_req_o", repair_req_o);
            check_assertion("Store repair flagged as store", repair_is_store_o);
            check_assertion("Store repair address correct", repair_req_addr_o == 32'hABCD_0010);
            check_assertion("Store repair data correct", repair_req_data_o == 32'h1234_5678);
            @(negedge clk);
            ack_repair();
            #1;
            check_assertion("Store repair in flight: no request", !repair_req_o);
            @(negedge clk);
            complete_repair();
            #1;
            check_assertion("Completed store entry freed (no re-request)", !repair_req_o);
            @(negedge clk);
        end
    endtask

    task automatic test_load_priority_over_store();
        logic req, is_store;
        logic [31:0] addr, data;
        logic [$clog2(ROB_ENTRIES)-1:0] rob_idx;
        begin
            $display("--- test_load_priority_over_store ---");
            alloc_st(32'h0000_1000, 32'hAAAA_AAAA);   // store allocated first
            alloc_ld(32'h0000_2000, 4'd3);
            service_one(req, is_store, addr, data, rob_idx);
            check_assertion("Load serviced before older store", req && !is_store && addr == 32'h0000_2000 && rob_idx == 4'd3);
            service_one(req, is_store, addr, data, rob_idx);
            check_assertion("Store serviced once loads drained", req && is_store && addr == 32'h0000_1000 && data == 32'hAAAA_AAAA);
            service_one(req, is_store, addr, data, rob_idx);
            check_assertion("Nothing pending after load+store", !req);
        end
    endtask

    task automatic test_load_order();
        logic req, is_store;
        logic [31:0] addr, data;
        logic [$clog2(ROB_ENTRIES)-1:0] rob_idx;
        logic ok = 1;
        begin
            $display("--- test_load_order ---");
            for (int i = 0; i < 3; i++) alloc_ld(32'h1000_0000 + 32'(i) * 16, 4'(i + 1));
            for (int i = 0; i < 3; i++) begin
                service_one(req, is_store, addr, data, rob_idx);
                if (!req || is_store || addr != 32'h1000_0000 + 32'(i) * 16 || rob_idx != 4'(i + 1)) ok = 0;
            end
            check_assertion("Loads in fresh MSHR serviced in allocation order", ok);
            service_one(req, is_store, addr, data, rob_idx);
            check_assertion("All loads drained", !req);
        end
    endtask

    task automatic test_load_fill();
        logic req, is_store;
        logic [31:0] addr, data;
        logic [$clog2(ROB_ENTRIES)-1:0] rob_idx;
        logic ok = 1;
        logic seen_dropped = 0;
        int n = 0;
        begin
            $display("--- test_load_fill ---");
            for (int i = 0; i < LD_ENTS; i++) begin
                #1;
                if (ld_full_o) ok = 0;
                alloc_ld(32'h2000_0000 + 32'(i) * 16, 4'(i));
            end
            #1;
            check_assertion("ld_full_o not asserted before last entry", ok);
            check_assertion("ld_full_o asserted with all load entries used", ld_full_o);
            check_assertion("st_full_o unaffected by load fill", !st_full_o);

            alloc_ld(32'hDEAD_0000, 4'hF);  // must be dropped
            #1;
            check_assertion("ld_full_o still asserted after overflow alloc", ld_full_o);

            ok = 1;
            for (int i = 0; i < LD_ENTS + 2; i++) begin
                service_one(req, is_store, addr, data, rob_idx);
                if (!req) break;
                if (addr == 32'hDEAD_0000) seen_dropped = 1;
                if (addr != 32'h2000_0000 + 32'(n) * 16 || rob_idx != 4'(n)) ok = 0;
                n++;
            end
            check_assertion("Exactly LD_ENTS loads serviced", n == LD_ENTS);
            check_assertion("Each full-MSHR load keeps its addr/ROB idx", ok);
            check_assertion("Overflow load alloc was dropped", !seen_dropped);
            #1;
            check_assertion("ld_full_o clears after draining", !ld_full_o);
        end
    endtask

    task automatic test_store_fill();
        logic req, is_store;
        logic [31:0] addr, data;
        logic [$clog2(ROB_ENTRIES)-1:0] rob_idx;
        logic ok = 1;
        logic seen_dropped = 0;
        int n = 0;
        begin
            $display("--- test_store_fill ---");
            for (int i = 0; i < ST_ENTS; i++) begin
                #1;
                if (st_full_o) ok = 0;
                alloc_st(32'h3000_0000 + 32'(i) * 16, 32'h5000_0000 + 32'(i));
            end
            #1;
            check_assertion("st_full_o not asserted before last entry", ok);
            check_assertion("st_full_o asserted with all store entries used", st_full_o);
            check_assertion("ld_full_o unaffected by store fill", !ld_full_o);

            alloc_st(32'hBEEF_0000, 32'hBAD0_BAD0);  // must be dropped

            ok = 1;
            for (int i = 0; i < ST_ENTS + 2; i++) begin
                service_one(req, is_store, addr, data, rob_idx);
                if (!req) break;
                if (addr == 32'hBEEF_0000) seen_dropped = 1;
                if (!is_store || addr != 32'h3000_0000 + 32'(n) * 16 || data != 32'h5000_0000 + 32'(n)) ok = 0;
                n++;
            end
            check_assertion("Exactly ST_ENTS stores serviced", n == ST_ENTS);
            check_assertion("Each full-MSHR store keeps its addr/data", ok);
            check_assertion("Overflow store alloc was dropped", !seen_dropped);
            #1;
            check_assertion("st_full_o clears after draining", !st_full_o);
        end
    endtask

    task automatic test_simultaneous_alloc();
        logic req, is_store;
        logic [31:0] addr, data;
        logic [$clog2(ROB_ENTRIES)-1:0] rob_idx;
        begin
            $display("--- test_simultaneous_alloc ---");
            ld_alloc_en_i = 1;
            ld_alloc_addr_i = 32'h4000_0000;
            ld_alloc_rob_idx_i = 4'd9;
            st_alloc_en_i = 1;
            st_alloc_addr_i = 32'h4000_1000;
            st_alloc_data_i = 32'h0000_BEEF;
            @(negedge clk);
            init_signals_inputs();
            service_one(req, is_store, addr, data, rob_idx);
            check_assertion("Same-cycle alloc: load captured", req && !is_store && addr == 32'h4000_0000 && rob_idx == 4'd9);
            service_one(req, is_store, addr, data, rob_idx);
            check_assertion("Same-cycle alloc: store captured", req && is_store && addr == 32'h4000_1000 && data == 32'h0000_BEEF);
            service_one(req, is_store, addr, data, rob_idx);
            check_assertion("Same-cycle alloc: nothing else pending", !req);
        end
    endtask

    task automatic test_alloc_during_repair();
        logic req, is_store;
        logic [31:0] addr, data;
        logic [$clog2(ROB_ENTRIES)-1:0] rob_idx;
        begin
            $display("--- test_alloc_during_repair ---");
            alloc_ld(32'h5000_0000, 4'd1);
            ack_repair();
            // new misses arrive while the first is in flight
            alloc_ld(32'h5000_0010, 4'd2);
            alloc_st(32'h5000_0020, 32'h0000_0022);
            #1;
            check_assertion("No new request while a repair is in flight", !repair_req_o);
            @(negedge clk);
            complete_repair();
            service_one(req, is_store, addr, data, rob_idx);
            check_assertion("Queued load serviced after in-flight repair", req && !is_store && addr == 32'h5000_0010 && rob_idx == 4'd2);
            service_one(req, is_store, addr, data, rob_idx);
            check_assertion("Queued store serviced after queued load", req && is_store && addr == 32'h5000_0020 && data == 32'h0000_0022);
            service_one(req, is_store, addr, data, rob_idx);
            check_assertion("Nothing pending after queued misses", !req);
        end
    endtask

    task automatic test_complete_and_alloc_same_cycle();
        logic req, is_store;
        logic [31:0] addr, data;
        logic [$clog2(ROB_ENTRIES)-1:0] rob_idx;
        begin
            $display("--- test_complete_and_alloc_same_cycle ---");
            alloc_ld(32'h6000_0000, 4'd4);
            ack_repair();
            repair_complete_i = 1;
            ld_alloc_en_i = 1;
            ld_alloc_addr_i = 32'h6000_0010;
            ld_alloc_rob_idx_i = 4'd5;
            @(negedge clk);
            init_signals_inputs();
            service_one(req, is_store, addr, data, rob_idx);
            check_assertion("Alloc on completion cycle is kept", req && addr == 32'h6000_0010 && rob_idx == 4'd5);
            service_one(req, is_store, addr, data, rob_idx);
            check_assertion("Completed entry not re-requested", !req);
        end
    endtask

    task automatic test_spurious_ack_complete();
        logic req, is_store;
        logic [31:0] addr, data;
        logic [$clog2(ROB_ENTRIES)-1:0] rob_idx;
        begin
            $display("--- test_spurious_ack_complete ---");
            // ack/complete with nothing pending must be harmless
            ack_repair();
            complete_repair();
            #1;
            check_assertion("Spurious ack/complete: no request", !repair_req_o);

            // complete while a request is pending but not yet acked must not drop it
            alloc_ld(32'h7000_0000, 4'd6);
            complete_repair();
            service_one(req, is_store, addr, data, rob_idx);
            check_assertion("Unacked entry survives a stray complete", req && addr == 32'h7000_0000 && rob_idx == 4'd6);
            service_one(req, is_store, addr, data, rob_idx);
            check_assertion("Nothing pending after stray-complete test", !req);
        end
    endtask

    task automatic test_flush_clears_loads_keeps_stores();
        logic req, is_store;
        logic [31:0] addr, data;
        logic [$clog2(ROB_ENTRIES)-1:0] rob_idx;
        int n;
        begin
            $display("--- test_flush_clears_loads_keeps_stores ---");
            for (int i = 0; i < LD_ENTS; i++) alloc_ld(32'h8000_0000 + 32'(i) * 16, 4'(i));
            alloc_st(32'h8100_0000, 32'h0000_0081);
            do_flush();
            #1;
            check_assertion("Flush clears ld_full_o", !ld_full_o);
            service_one(req, is_store, addr, data, rob_idx);
            check_assertion("Store survives flush and is serviced", req && is_store && addr == 32'h8100_0000 && data == 32'h0000_0081);
            drain(n);
            check_assertion("No flushed loads are serviced", n == 0);
        end
    endtask

    task automatic test_flush_blocks_alloc();
        int n;
        begin
            $display("--- test_flush_blocks_alloc ---");
            flush = 1;
            ld_alloc_en_i = 1;
            ld_alloc_addr_i = 32'h9000_0000;
            @(negedge clk);
            flush = 0;
            init_signals_inputs();
            #1;
            check_assertion("Load alloc during flush is ignored", !repair_req_o);
            drain(n);
            check_assertion("Nothing pending after flushed alloc", n == 0);
        end
    endtask

    task automatic test_flush_during_load_repair();
        logic req, is_store;
        logic [31:0] addr, data;
        logic [$clog2(ROB_ENTRIES)-1:0] rob_idx;
        begin
            $display("--- test_flush_during_load_repair ---");
            alloc_ld(32'hA000_0000, 4'd1);
            ack_repair();              // load repair in flight in slot 0
            do_flush();                // squashes all loads
            alloc_ld(32'hA000_0010, 4'd2);  // new, post-flush load reuses slot 0
            complete_repair();         // stale repair finishes
            service_one(req, is_store, addr, data, rob_idx);
            check_assertion("Post-flush load not dropped by completion of a squashed repair",
                            req && !is_store && addr == 32'hA000_0010 && rob_idx == 4'd2);
            service_one(req, is_store, addr, data, rob_idx);
        end
    endtask

    task automatic test_flush_during_store_repair();
        logic req, is_store;
        logic [31:0] addr, data;
        logic [$clog2(ROB_ENTRIES)-1:0] rob_idx;
        begin
            $display("--- test_flush_during_store_repair ---");
            alloc_st(32'hB000_0000, 32'h0000_00B0);
            alloc_st(32'hB000_0010, 32'h0000_00B1);
            ack_repair();              // first store in flight
            do_flush();
            #1;
            check_assertion("Flush during store repair: still in flight", !repair_req_o);
            @(negedge clk);
            complete_repair();
            service_one(req, is_store, addr, data, rob_idx);
            check_assertion("Second store serviced after flush + completion", req && is_store && addr == 32'hB000_0010 && data == 32'h0000_00B1);
            service_one(req, is_store, addr, data, rob_idx);
            check_assertion("Nothing pending after store-flush test", !req);
        end
    endtask

    task automatic test_reset_mid_repair();
        int n;
        begin
            $display("--- test_reset_mid_repair ---");
            alloc_ld(32'hC000_0000, 4'd3);
            alloc_ld(32'hC000_0010, 4'd4);
            alloc_st(32'hC000_0020, 32'h0000_00C2);
            ack_repair();
            reset_dut();
            #1;
            check_assertion("Reset mid-repair: no request", !repair_req_o);
            check_assertion("Reset mid-repair: not full", !ld_full_o && !st_full_o);
            // repair state machine must be idle: a new alloc gets requested right away
            @(negedge clk);
            alloc_ld(32'hC100_0000, 4'd5);
            #1;
            check_assertion("Reset mid-repair: new alloc requested immediately", repair_req_o && repair_req_addr_o == 32'hC100_0000);
            @(negedge clk);
            drain(n);
            check_assertion("Reset mid-repair: only the new alloc pending", n == 1);
        end
    endtask

    task init_signals_inputs();
        begin
            ld_alloc_en_i = 0;
            ld_alloc_addr_i = 0;
            ld_alloc_rob_idx_i = 0;
            st_alloc_en_i = 0;
            st_alloc_addr_i = 0;
            st_alloc_data_i = 0;
            repair_complete_i = 0;
            repair_ack_i = 0;
        end
    endtask

    // ==== Main Test Sequence ==== //
    initial begin
        init_signals();
        $display("=== MSHR Testbench ===");
        reset_dut();

        test_reset_state();
        test_single_load();
        test_single_store();
        test_load_priority_over_store();
        test_load_order();
        test_load_fill();
        test_store_fill();
        test_simultaneous_alloc();
        test_alloc_during_repair();
        test_complete_and_alloc_same_cycle();
        test_spurious_ack_complete();
        test_flush_clears_loads_keeps_stores();
        test_flush_blocks_alloc();
        test_flush_during_store_repair();
        test_reset_mid_repair();
        reset_dut();
        test_flush_during_load_repair();

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
