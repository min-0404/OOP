//동적 변수 참조 반환
#include <iostream>
using namespace std;

int& dynpoint(){
    int* p = new int(10);
    cout << &(*p) << " " << *p << endl;
    return *p;
}

int main(){
    int& a = dynpoint();
    cout << &a << " " << a << endl;
    a = 1000;
    cout << &a << " " << a << endl;
}

// &(*p) 는 포인터가 가리키는 주소의 주소