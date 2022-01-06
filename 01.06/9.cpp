// 퀴즈: 멤버함수로 += 연산자 구현해보기
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
    Power operator += (Power op2);
};
void Power::show(){
    cout << kick << " " << punch << endl;
}
Power Power::operator += (Power op2){
    kick += op2.kick;
    punch += op2.punch;
    return *this;
}

int main(){
    Power a(3,5);
    Power b(4,6);
    Power c;
    c = a += b;
    a.show();
    b.show();
    c.show();
}