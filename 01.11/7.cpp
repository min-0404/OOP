#include <iostream>
#include <string>
using namespace std;

class LoopAdder
{
private:
    string name;
    int x, y, sum;
    void read();
    void write(); // sum 출력하는 함수
protected:
    LoopAdder(string name =" "){
        this -> name = name;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
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
    cout << x << "에서" << y << "까지의 합" << sum << "입니다" <<endl;
}
void LoopAdder::run(){
    read();
    sum = calculate();
    write();
}
class ForLoopAdder: public LoopAdder
{
public:
    int calculate(){
        int start = getX();
        int end = getY();
        int result;
        for(int i = start; i <= end; i++)
            sum += i;
    }
}