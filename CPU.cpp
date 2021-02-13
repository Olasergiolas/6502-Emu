#include "Memory.cpp"

struct CPU{
    // Registers
    Word PC;
    Byte SP;

    Byte A, X, Y;   // Accumulator, X and Y registers

    // Flags
    Byte CF : 1;    // Carry
    Byte ZF : 1;    // Zero
    Byte ID : 1;    // Interrupt Disable
    Byte DM : 1;    // Decimal mode
    Byte BR : 1;    // Break Command
    Byte OF : 1;    // Overflow
    Byte NE : 1;    // Negative

    // Reset sequence
    // TO-DO: Proper initialization
    void Reset(Memory &mem){
        CF = ZF = ID = DM = BR = OF = NE = 0;

        PC = 0xFFFC;
        SP = 0x0000;

        A = X = Y = 0x0000;

        mem.Init();
    }

    //Get a byte from memory
    Byte FetchByte(u32 &clock_cycles, Memory& mem){
        Byte byte = mem[PC];
        clock_cycles--;
        PC++;
        return byte;
    }

    // Let's execute something
    void Execute(u32 clock_cycles, Memory &mem){
        while (clock_cycles > 0){

        }
    }
};
