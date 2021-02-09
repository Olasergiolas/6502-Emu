#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

using Byte = unsigned char;
using Word = unsigned short int;

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
    Byte OF : 1;    // Overflow Flag
    Byte NE : 1;    // Negative Flag
};

int main()
{
    Byte test = 0x53;
    printf("0x%x\n", test);
}
