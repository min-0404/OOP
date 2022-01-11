// 가상 소멸자를 구현해보자
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
    Base* bp = new Derived();
    
    delete dp;
    delete bp;
}