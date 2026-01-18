module tb_data_cache;
    logic clk;
    logic rst;
    logic is_repair_i;
    logic [127:0] repair_data_i;
    logic w_en;
    logic [31:0] w_data_i;
    logic [31:0] w_addr_i;
    logic r_en;
    logic [31:0] r_addr_i;
    logic [31:0] r_data_o;
    logic r_hit_o;
    logic w_hit_o;


    data_cache #(
        .BLOCK_SIZE(128),
        .NUM_ENTRIES(64)
    ) dut (
        .clk(clk),
        .rst(rst),
        .is_repair_i(is_repair_i),
        .repair_data_i(repair_data_i),
        .w_en(w_en),
        .w_data_i(w_data_i),
        .w_addr_i(w_addr_i),
        .r_en(r_en),
        .r_addr_i(r_addr_i),
        .r_data_o(r_data_o),
        .r_hit_o(r_hit_o),
        .w_hit_o(w_hit_o)
    );

endmodule