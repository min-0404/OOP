#include <iostream>
using namespace std;

namespace Grphic
{
    int maximum = 100; // 반지름의 최대값
}
namespace Math{
    int maximum = 65536;
    int add(int a, int b) { return a + b;}
    int sub(int a, int b) { return a - b;}
}
int main ()
{
    cout << Grphic::maximum << endl;
    cout << "Interger Maximum : " << Math::maximum << endl;
    cout << "Interger Add : " << Math::add(2,4) << endl;
}