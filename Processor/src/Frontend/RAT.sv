import CORE_PKG::*;

module RAT(
      
      input clk,
      input rst,
      RenameRATIF.RAT RenameIF[RENAME_WIDTH] 
  );

  logic [$clog2(NUM_PREGS)-1:0] register_alias_table [0:(NUM_AREGS-1)]; // actual rat
  

  genvar k;
  generate  
    // Writing alias to the rat
    for(k = 0; k < RENAME_WIDTH; k++) begin
      always@(posedge clk) begin
        if(rst) begin
          for ( i = 0; i < NUM_AREGS; i++) begin
            register_alias_table[i] <= i;
          end
        end else if(RenameIF.w_en[k]) begin 
            register_alias_table[RenameIF[k].w_dst_areg] <= RenameIF[k].w_new_alias; 
          end
      end

    // Reading aliases
    assign RenameIF[k].preg_alias_out[0] = register_alias_table[RenameIF[k].areg_in[0]];
    assign RenameIF[k].preg_alias_out[1] = register_alias_table[RenameIF[k].areg_in[1]];

    end 
  endgenerate

endmodule



