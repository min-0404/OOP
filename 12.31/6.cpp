// 참조자란 무엇인가
#include <iostream>
using namespace std;

int main ()
{
    int x = 10;
    int& ref = x; // x와 ref는 동일하다(동일한 공간에 대한 이름일 뿐)
    ref++;
    cout << x << ' ' << ref << endl;

    int* p = &ref;
    *p = 20;
    cout << x << ' ' << ref << endl;
}