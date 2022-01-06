// 유형 2. + 연산자 "전역 함수"로 작성해보자 (프렌드 선언 이용)
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
    friend Power operator+(Power op1, Power op2);
};
void Power::show(){
    cout << kick << " " << punch << endl;
}
Power operator+(Power op1, Power op2){
    Power temp;
    temp.kick = op1.kick + op2.kick;
    temp.punch = op1.punch + op2.punch;
    return temp;
    // 또는 그냥 귀찮게 쓰지 말고 한문장으로도 구현 가능: return Power(op1.kick + op2.kick, op1.punch + op2.punch);
}

int main(){
    Power a(3,5);
    Power b(4,6);
    Power c;
    c = a + b;
    a.show();
    b.show();
    c.show();
}