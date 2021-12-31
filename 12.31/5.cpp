// 객체 리턴해보기
#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;
public:
    Circle(){radius = 1;}
    Circle(int radius){this -> radius = radius;}
    void setRadius(int radius) {this -> radius = radius;}
    double getArea(){return 3.14 * radius * radius;}
};

Circle getCircle()
{
    Circle tmp(30);
    return tmp; // temp 객체의 복사본이 리턴된다
}
int main()
{
    Circle c;
    cout << c.getArea() << endl;

    c = getCircle(); // tmp 객체가 c에 복사된다
    cout << c.getArea() << endl;
}


