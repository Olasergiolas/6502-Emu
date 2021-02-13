// Instructions provided by https://www.youtube.com/watch?v=qJgsuQoy9bc
// CPU technical details http://www.obelisk.me.uk/6502/

#include "CPU.cpp"
using namespace std;

int main()
{
    CPU cpu;
    Memory mem;

    cpu.Reset(mem);
}
