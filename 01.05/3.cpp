// static 멤버는 ::연산자로 객체 없이 접근이 가능하다
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
public:
    double money;
    void addMoney(int money){
        this -> money += money;
    }
    static int sharedMoney;
    static void addShared(int n){
        sharedMoney += n;
    }
};
int Person::sharedMoney  = 10;

int main(){
    Person::addShared(50); // ::을 통해 바로 static 멤버 함수에 접근 가능 !!!
    cout << Person::sharedMoney << endl; // ::을 통해 바로 static 멤버 변수에 접근 가능 !!!

    Person han;
    han.money = 100;
    han.sharedMoney = 200;

    Person lee;
    lee.money = 150;
    lee.addMoney(200);
    lee.addShared(200);

    cout << han.money << " " << lee.money << endl;
    cout << han.sharedMoney << " " << lee.sharedMoney << endl;
}