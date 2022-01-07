// 주제 : 연산자 오버로딩
// 유형 1. + 연산자 "멤버 함수"로 작성해보자
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
    Power operator+(Power op2);
};
void Power::show(){
    cout << kick << " " << punch << endl;
}
Power Power::operator+(Power op2){
    Power temp;
    temp.kick = this -> kick + op2.kick;
    temp.punch = this -> punch + op2.punch;
    return temp;
    // 또는 그냥 귀찮게 쓰지 말고 무명객체 반환으로 구현 가능: 
    //return Power(this -> kick + op2.kick, this -> punch + op2.punch);
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