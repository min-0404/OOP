// 추상 클래스를 상속받는 파생 클래스 구현을 연습해보자
#include <iostream>
#include <string>
using namespace std;

class Calculator // 순수 가상 함수가 1개라도 있기 때문에 얘는 추상클래스이다.
{
private:
    void input(){
        cout << "정수 2개를 입력하세요>>";
        cin >> a >> b;
    }
protected:
    int a;
    int b;
    virtual int calc(int a, int b) = 0; // "순수 가상 함수"
public:
    void run(){
        input();
        cout << "계산된 값은" << calc(a,b) << endl;
    }
};
class Adder: public Calculator
{
protected:
    int calc(int a , int b){ // 자식 클래스에서 순수 가상함수 구현
        return a + b;
    }
};
class Subtractor: public Calculator
{
protected:
    int calc(int a, int b){ // 자식 클래스에서 순수 가상함수 구현
        return a -b;
    }
};

int main(){
    // 업캐스팅 안쓰고 구현보기
    Adder adder;
    Subtractor subtractor;

    adder.run();
    subtractor.run();
    
    // 업캐스팅 사용한 버전 작성해볼까?
    Calculator* p1 = new Adder(); // 업캐스팅
    Calculator* p2 = new Subtractor(); // 업캐스팅

    p1 -> run();
    p2 -> run();
}
