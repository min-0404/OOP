// 참조 리턴
#include <iostream>
using namespace std;

int& addconst(int& x, int y){
    x += 200;
    y += 200;
    cout << "addconst 함수에서의 x 와 y 출력" << endl;
    cout << &x << " " << x << endl;
    cout << &y << " " << y << endl;
    return x;    
}

int main(){
    int a = 100;
    int b = 10;
    
    int c = addconst(a, b); // c는 참조 변수로 선언하지 않음
    cout << &a << " " << a << endl;
    cout << &b << " " << b << endl;
    cout << &c << " " << c << endl;
    // 결과 : a(=x), b, c의 주소는 모두 다르다

    int& d = addconst(a,b); // d는 참조 변수로 선언
    cout << &a << " " << a << endl;
    cout << &b << " " << b << endl;
    cout << &c << " " << c << endl;
    cout << &d << " " << d << endl;
    // 결과: a, x, d의 주소는 모두 같고, b와 d는 다르다.
}