// 퀴즈: operator+= 과 operator-(-1 곱하는 연산) 구현하기
#include <iostream>
using namespace std;

class complex
{
private:
    int x;
    int y;
public:
    complex(int a = 0, int b = 0) : x(a), y(b) {}
    friend ostream& operator<<(ostream& os, complex& c);
    complex operator+=(complex&);
    complex& operator-();
};
ostream& operator<<(ostream& os, complex& c){
    os << c.x << " " << c.y << endl;
    return os;
}
complex complex::operator+=(complex& c){
    this -> x += c.x;
    this -> y += c.y;
    return *this;
}
complex& complex::operator-(){
    this -> x *= -1;
    this -> y *= -1;
    return *this;
}

int main(){
    complex c1(1,1);
    complex c2(2,2);
    c2 += c1;
    cout << &c1 << " " << c1 << endl;
    cout << &c2 << " " << c2 << endl;

    complex c3 = -c1; // 얕은 복사 -> 아예 다른 객체니깐 주소 다름
    cout << &c3 << " " << c3 << endl;
    complex& ref = -c2; // 참조 객체 -> c2와 주소가 같음
    cout << &ref << " " << ref << endl;

}

