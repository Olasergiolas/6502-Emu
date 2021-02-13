#include "alias.h"

// Shouldn't this be 8192 to get 64Kb of memory?
// Memory map goes from 0x0000 to 0xFFFF but why using "Byte" then?
static constexpr u32 MAX_MEM = 1024 * 64;

struct Memory{
    Byte mem[MAX_MEM];

    void Init(){
        for (u32 i = 0; i < MAX_MEM; ++i)
            mem[i] = 0x0000;
    }

    Byte operator[](u32 addr) const{
        //Check if address is within bounds
        assert(addr >= 0x0000 && addr <= MAX_MEM);
        return mem[addr];
    }
};
