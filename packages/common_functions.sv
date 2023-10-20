package common_functions;

    function logic[31:0] order_word(input logic[31:0] word);
        return {word[7:0],word[15:8],word[23:16],word[31:24]};
    endfunction : order_word

    function logic[7:0] order_byte(input logic [7:0] byte_data);
        return {byte_data[3],byte_data[2],byte_data[1],byte_data[0],byte_data[7],byte_data[6],byte_data[5],byte_data[4]};
    endfunction : order_byte
    
endpackage : common_functions