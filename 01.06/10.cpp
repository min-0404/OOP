// 유형 1. 전위 연산자를 멤버함수로 구현해보기 : 전위연산자는 매개 변수 없음
#include <iostream>
using namespace std;

class Power
{
private:
    int kick;
    int punch;
public:
    Power(int kick = 0, int punch = 0){
        this -> kick = kick;
        this -> punch = punch;
    }
    void show();
    Power operator++(); // 매개 변수 없음!!
};
void Power::show(){
    cout << kick << " " << punch << endl;
}
Power Power::operator++(){
    kick++;
    punch++;
    return *this;
}

int main(){
    Power a(3,5);
    Power b;
    a.show();
    b.show();

    b = ++a;
    a.show();
    b.show();
}