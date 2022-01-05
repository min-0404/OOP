// 퀴즈: 이름, 월급, 직원수(static변수)를 가진 직원 클래스를 구현해보자
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int salary;
    static int count; // 정적 변수
public:

    Employee(string name = "who", int salary = 0); // 생성자
    ~Employee(); // 소멸자
    static int getCount(){ // 정적 멤버 함수
        return count;
    }
};
Employee::Employee(string name, int salary){
    this -> name = name;
    this -> salary = salary;
    count++;
}
Employee::~Employee(){
    count--;
}
int Employee::count = 0;

int main(){
    Employee e1("김철수");
    Employee e2;
    Employee e3("김철호", 20000);

    int n = Employee::getCount(); // 객체를 통하지 않고, 클래스 이름만으로 정적함수에 접근 가능
    // int n = e1.getCount(); 해도 전혀 상관없다.
    cout << "현재 직원 수: " << n << endl;
}