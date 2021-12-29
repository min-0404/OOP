#include "Ram.h"
Ram::Ram()
{
    mem[100 * 1024]= {}; // 0으로 초기화
    size = 100 * 1024;
}
Ram::~Ram()
{
    cout << "메모리 제거됨" << endl;
}
char Ram::read (int address)
{
    return mem[address];
}
void Ram::write(int address, char value)
{
    mem[address] = value;
}
