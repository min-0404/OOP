// 퀴즈 : LoopAdder클래스를 상속받아 ForLoopAdder 클래스를 구현해라.
// 두개의 수를 입력받아서, 그 사이의 숫자 모두 더한값 구하는 프로그램 
#include <iostream>
#include <string>
using namespace std;

class LoopAdder // 추상 클래스
{
private:
    string name;
    int x, y, sum;
    void read(); // x와 y 읽어들이는 함수
    void write(); // 계산된 sum 출력하는 함수
protected:
    LoopAdder(string name =" ") { this -> name = name;} // 생성자
    int getX() { return x; }
    int getY(){ return y; }
    virtual int calculate() = 0; // 순수 가상함수. 루프를 돌면서 합을 구하는 함수
public:
    void run();// 연산을 진행하는 함수
};
void LoopAdder::read(){
    cout << name << ":" << endl;
    cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요>>";
    cin >> x >> y;
}
void LoopAdder::write(){
    cout << x << "에서" << y << "까지의 합은 " << sum << "입니다" <<endl;
}
void LoopAdder::run(){
    read();
    sum = calculate();
    write();
}

class ForLoopAdder: public LoopAdder // 추상 클래스의 상속
{
protected:
    virtual int calculate(){ // 자식 클래스에서 순수 가상 함수의 구현
        int result = 0;
        for(int i = getX(); i <= getY(); i++)
            result += i;
        return result;
    }
public:
    ForLoopAdder(string name): LoopAdder(name) {} // 상속의 특징을 활용한 생성자
};

int main(){
    ForLoopAdder x("For Loop");
    x.run();
}