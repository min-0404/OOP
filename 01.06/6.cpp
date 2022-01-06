// 퀴즈 : operator- 연산자를 멤버함수로 구현해보기
#include <iostream>
using namespace std;

class CPoint
{
private:
    int x;
    int y;
public:
    CPoint(int a = 0, int b = 0) : x(a), y(b) {}
    CPoint operator-(){
        return CPoint((this -> x) *(-1), (this -> y) *(-1));
    }
    void Print(){
        cout << x << " " << y << endl;
    }
};

int main(){
    CPoint P1(2,2);
    CPoint P2 = -P1;
    CPoint P3 = -(-P1);
    P1.Print();
    P2.Print();
    P3.Print();
};