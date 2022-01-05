// 참조 변수와 그냥 변수를 구분해야 한다.
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int& ref = a; // ref는 참조 변수
    int b = ref; // b는 참조 변수 아니다. 그냥 값만 복사해올 뿐
    cout << &a << " " << a << endl;
    cout << &ref << " " << ref << endl;
    cout << &b << " " << b << endl;
}