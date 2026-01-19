module cache_controller (
    input logic clk,
    input logic rst,

);


    data_cache #(
        .BLOCK_SIZE(128),
        .NUM_ENTS(64)
    ) u_data_cache (
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


    miss_status_history_register mshr (

    );

endmodule