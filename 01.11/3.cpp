// 조금 확장해보자 : 상속이 "반복"되는 경우의 가상함수 호출
#include <iostream>
#include <string>
using namespace std;

class Base
{
public:
    virtual void f() {cout << "Base::f() called " << endl;}
};

class Derived: public Base
{
public:
    void f(){cout << "Derived::f() called" << endl;} // virtual 생략 가능
};

class GrandDerived: public Derived
{
public:
    void f() {cout << "GrandDerived::f() called" << endl;} // virtual 생략 가능
};

int main(){
    GrandDerived g; // 객체 생성
    Base* bp;
    Derived* dp;
    GrandDerived* gp;
    bp = dp = gp = &g; // 업캐스팅

    //업캐스팅 이렇게도 표현 가능!!!!!!!!!!
    //Base* bp = new GrandDerived();
    //Derived* dp = new GrandDerived();
    //GrandDerived* gp = new GrandDerived();
    
    bp -> f();
    dp -> f();
    gp -> f();
    // 결과 : 동적 바인딩에 의해 모두 GrandDerived 의 f 함수가 실행됨
}
