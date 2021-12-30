// 포인터를 통해 객체에 접근해보기
#include <iostream>
using namespace std;
class Circle
{
    int radius;
public:
    Circle(){radius = 1;}
    Circle(int r){radius = r;}
    double getArea();
};
double Circle::getArea() { return 3.14 * radius * radius; }

int main()
{
    Circle donut;
    Circle* p;
    p = &donut;
    cout << p -> getArea() << endl; // 포인터로 함수 호출하는 방법 1
    cout << (*p).getArea() << endl; // 포인터로 함수 호출하는 방법 2

    Circle pizza(30);
    p = &pizza;
    cout << p -> getArea() << endl;
    cout << (*p).getArea() << endl;
}