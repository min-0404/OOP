// 유형 3, 4 .전위 연산자와 후위 연산자를 외부 함수로 구현해보기
// 참조자를 사용해야 하는 이유 이해가지?
// 당연히 해당 값 자체를 증가시키는 거니깐 증가시키려는 객체 그 자체의 참조자를 사용해야지
#include <iostream>
using namespace std;

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
    friend Power operator++(Power& op); // 전위 연산자
    friend Power operator++(Power& op, int x); // 후위 연산자
};
void Power::show(){
    cout << kick << " " << punch << endl;
}
Power operator++(Power& op){
    op.kick++;
    op.punch++;
    return op;
}
Power operator++(Power& op, int x){
    Power temp = op;
    op.kick++;
    op.punch++;
    return temp;
}

int main(){
    Power a(3,5);
    Power b;
    b = ++a;
    a.show();
    b.show();

    b = a++;
    a.show();
    b.show();
}

