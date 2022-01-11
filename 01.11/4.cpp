// 가상 소멸자를 구현해보고 동적바인딩의 원리에 따라 어떤 순서로 실행되는지 파악하자
#include <iostream>
#include <string>
using namespace std;

class Base
{
public:
    virtual ~Base(){
        cout << "~Base()" << endl;
    }
};
class Derived: public Base
{
public:
    virtual ~Derived(){
        cout << "~Derived() " << endl;
    }
};

int main(){
    Derived *dp = new Derived();
    Base* bp = new Derived(); //업캐스팅
    
    delete dp; // 그냥 일반적인 자식 클래스의 소멸 : ~Derived()실행 -> ~Base()실행. 단순한 상속의 특징
    delete bp; // 동적 바인딩에 의해 : Derived() 실행 -> ~Base() 실행 
}