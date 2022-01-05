// 지역 변수 참조 반환

#include <iostream>
using namespace std;

int& localvar(){
    int lvar = 200; // 지역 변수
    cout << &lvar << " " << lvar << endl;
    return lvar; // 지역 변수는 반환하면 안된다 !!!
}

int main(){
    int a = localvar();
    cout << &a << " " << a << endl;

    int& b = localvar();
    cout << &b << " " << b << endl;
}