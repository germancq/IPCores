    
    virtual class utils_functions #(parameter LEN = 32);

        static function logic [LEN-1:0] ROL(input logic [LEN-1:0] x, input logic [LEN-1:0] n);
            return (x<<n) | (x>>(LEN-n));
        endfunction: ROL

        static function logic [LEN-1:0] ROR(input logic [LEN-1:0] x, input logic [LEN-1:0] n);
            return (x>>n) | (x<<(LEN-n));
        endfunction: ROR

        static function logic[31:0] getWord(input logic [LEN-1:0] x, input logic [(LEN>>3)-1:0] n);
            return x>>(32*n) & 32'hFFFFFFFF;
        endfunction

    endclass