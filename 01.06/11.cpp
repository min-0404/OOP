// 유형 2 .후위 연산자를 멤버함수로 구현해보기 : 매개 변수로 임의의 정수 넣어주면 됨
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
    Power operator++(int x); // 매개 변수 아무거나!!
};
void Power::show(){
    cout << kick << " " << punch << endl;
}
Power Power::operator++(int x){
    Power temp = *this; // 임시적으로 증가하기 전의 객체 값을 temp에 저장해둠
    kick++;
    punch++;
    return temp;
}

int main(){
    Power a(3,5);
    Power b;
    a.show();
    b.show();

    b = a++;
    b.show();
    a.show();
}