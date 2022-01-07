// 퀴즈: "전역함수"로 += 연산자 구현해보기
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
    friend Power operator += (Power op1, Power op2);
};
void Power::show(){
    cout << kick << " " << punch << endl;
}
Power operator += (Power op1, Power op2){
    return Power(op1.kick + op2.kick, op1.punch + op2.punch);
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