// 객체의 참조 변수
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
};
ostream& operator<<(ostream& os, complex& c){
    os << c.x << " " << c.y << endl;
    return os;
};

int main(){
    complex c1(1,1);
    complex c2(2,2);
    complex c3 = c2; // 얕은 복사( c3은 c2와 주소는 다르지만 값은 다 똑같게 됨)
    cout << &c1 << " " << c1;
    cout << &c2 << " " << c2;
    cout << &c3 << " " << c3;
    
    complex& ref = c1;
    cout << &ref << " " << ref << endl;    
}