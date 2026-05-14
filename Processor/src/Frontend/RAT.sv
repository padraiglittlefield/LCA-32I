
module RAT(
  
    input logic clk,
    input logic rst,
    input logic flush,
    // Read Ports
    input   logic  [$clog2(NUM_AREGS)-1:0] rd_areg_src1_i   [0:RENAME_WIDTH-1],    // the areg to be translated
    output  logic  [$clog2(NUM_PREGS)-1:0] rd_alias_src1_o  [0:RENAME_WIDTH-1],  // the preg alias for that areg
    input   logic  [$clog2(NUM_AREGS)-1:0] rd_areg_src2_i   [0:RENAME_WIDTH-1],
    output  logic  [$clog2(NUM_PREGS)-1:0] rd_alias_src2_o  [0:RENAME_WIDTH-1], 
    // output logic rd_alias_vld_o [0:RENAM_WIDTH-1:0],
    
    // Write Ports
    input logic [RENAME_WIDTH-1:0] w_en,
    input logic [$clog2(NUM_AREGS)-1:0] w_dst_areg_i [0:RENAME_WIDTH-1], 
    input logic [$clog2(NUM_PREGS)-1:0] w_new_alias_i [0:RENAME_WIDTH-1]
    );
    
  import CORE_PKG::*;

typedef struct packed {
  logic [$clog2(NUM_PREGS)-1:0] preg_alias;
  // logic alias_vld;
} rat_entry_t;

rat_entry_t register_alias_table [0:(NUM_AREGS-1)]; // actual rat


// Writing alias to the rat
always_ff @(posedge clk) begin
  if(rst || flush) begin
    for (int i = 0; i < NUM_AREGS; i++) begin
      register_alias_table[i] <= i; // Map AREGS->AREGS on flush/rest
    end
  end else begin
      for(int i = 0; i < RENAME_WIDTH;i++) begin
        if(w_en[i]) begin
          register_alias_table[w_dst_areg_i[i]] <= w_new_alias_i[i]; 
        end
      end
    end
end

// Reading Mappings from AREG->PREG
always_comb begin
  for(int i = 0; i<RENAME_WIDTH;i++) begin
    // rd_alias_vld_o[i] = register_alias_table[rd_areg_i[i]].alias_vld;
    rd_alias_src1_o[i] = register_alias_table[rd_areg_src1_i[i]].preg_alias;
    rd_alias_src2_o[i] = register_alias_table[rd_areg_src2_i[i]].preg_alias;


    // Bypass new Mappings from earlier entries
    for (int j = 0; j < i; j++) begin
        if (w_en[j] && w_dst_areg_i[j] == rd_areg_src1_i[i]) begin
            rd_alias_src1_o[i]     = w_new_alias_i[j];
        end
        if (w_en[j] && w_dst_areg_i[j] == rd_areg_src2_i[i]) begin
            rd_alias_src2_o[i]     = w_new_alias_i[j];
        end
    end
  end
end

endmodule



