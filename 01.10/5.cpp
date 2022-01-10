// 퀴즈 : 상속받은 NamedCircle 클래스를 작성하기
#include <iostream>
#include <string>
using namespace std;

class Circle
{
private:
    int radius;
public:
    Circle(int radius = 0) { this -> radius = radius; } // 기본 생성자
    int getRadius() { return radius;}
    void setRadius(int radius) {this -> radius = radius;}
    double getArea() { return 3.14 * radius * radius;}
};

class NamedCircle : public Circle
{
private:
    string name;
public:
    //근데 Circle(radius) 안넣어도 실행가능 . 왜? => 부모클래스에서 묵시적으로 기본생성자가 존재하기 때문에(디폴트값)
    NamedCircle(int radius, string name) : Circle(radius){ 
        this -> name = name;
    }
    void show(){
        cout << "반지름이" << getRadius() << "," << "이름이 " << name << " 인 원" << endl;
    }
};

int main(){
    NamedCircle waffle(3, "waffle");
    waffle.show();
}
