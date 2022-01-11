// 오버라이딩과 가상 함수 호출 구현해보기
// 
#include <iostream>
#include <string>
using namespace std;

class Base
{
public:
    virtual void f(){cout << "Base()::f called" << endl; }
};

class Derived : public Base
{
public:
    virtual void f() { cout << "Derived::f() called" << endl; } // 이때, 자식 클래스의 오버라이딩된 함수는 virtual 생략해도 상관없음
};

int main(){
    Derived d;
    Derived* pDer;
    pDer = &d;
    pDer -> f();
    
    Base* pBase;
    pBase = pDer; // 업캐스팅
    pBase -> f();
}