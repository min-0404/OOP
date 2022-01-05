// 매개 참조변수
#include <iostream>
using namespace std;

void addconst(int& x, int y){
    x += 200;
    y += 200;
    cout << "addconst 함수에서의 x 와 y 출력" << endl;
    cout << &x << " " << x << endl;
    cout << &y << " " << y << endl;
}


int main(){
    int a = 100;
    int b = 10;
    addconst(a,b);
    cout << &a << " " << a << endl;
    cout << &b << " " << b << endl;
}
// 결과 : a 와 x 의 주소는 동일, b 와 y의 주소는 다름