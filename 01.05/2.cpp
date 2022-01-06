// "static 멤버 변수"와 "static 멤버 함수"를 구현해보자
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
public:
    double money; // 개인 돈
    void addMoney(int money){
        this -> money += money;
    }
    static int sharedMoney; // 공금
    static void addShared(int n){
        sharedMoney += n;
    }
};
int Person::sharedMoney  = 10; // 중요 : static 멤버 변수는 메인 함수 전에 꼭 초기화를 해놓아야함!!!!!
int main(){
    Person han;
    han.money = 100;
    han.sharedMoney = 200; // static 멤버에 접근

    Person lee;
    lee.money = 150;
    lee.addMoney(200);
    lee.addShared(200); // static 멤버에 접근

    cout << han.money << " " << lee.money << endl;
    cout << han.sharedMoney << " " << lee.sharedMoney << endl;

    Person::addShared(500); // static은 객체뿐 아니라 클래스 자체에서 접근이 가능하다
    cout << Person::sharedMoney << " " << han.sharedMoney << " " << lee.sharedMoney << endl; // 모두 동일

}

//static 멤버는 프로그램 시작할때 이미 만들어져있음
// lee나 han 객체는 프로그램 중간(메인함수에서)에서 만들어지고, static멤버는 이미 만들어져 있으므로
// static에 접근이 가능하다.
// 너무 당연한 내용이고, 시험에 나올 것임