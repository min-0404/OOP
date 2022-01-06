// 퀴즈: 6.cpp 를 전역함수로 구현해보기
#include <iostream>
using namespace std;

class CPoint
{
private:
    int x;
    int y;
public:
    CPoint(int a = 0, int b = 0) : x(a), y(b) {}
    friend CPoint operator-(CPoint p);
    void Print(){
        cout << x << " " << y << endl;
    }
};
CPoint operator-(CPoint p){
        return CPoint((p.x) *(-1), (p.y) *(-1));
}

int main(){
    CPoint P1(2,2);
    CPoint P2 = -P1;
    CPoint P3 = -(-P1);
    P1.Print();
    P2.Print();
    P3.Print();
};