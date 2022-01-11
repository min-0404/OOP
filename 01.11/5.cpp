// 추상 클래스를 상속받는 파생 클래스 구현을 연습해보자
// 이번에는 업캐스팅을 사용하지 않은 경우
#include <iostream>
#include <string>
using namespace std;

class Calculator
{
private:
    void input(){
        cout << "정수 2개를 입력하세요>>";
        cin >> a >> b;
    }
protected:
    int a;
    int b;
    virtual int calc(int a, int b) = 0; // 순수 가상 함수
public:
    void run(){
        input();
        cout << "계산된 값은" << calc(a,b) << endl;
    }
};
class Adder: public Calculator
{
protected:
    int calc(int a , int b){ //순수 가상함수 구현
        return a + b;
    }
};
class Subtractor: public Calculator
{
protected:
    int calc(int a, int b){ // 순수 가상함수 구현
        return a -b;
    }
};

int main(){
    Adder adder;
    Subtractor subtractor;
    adder.run();
    subtractor.run();
}
