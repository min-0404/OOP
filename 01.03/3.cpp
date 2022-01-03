// 객체의 radius 를 1 증가시키는 함수를 만들고 싶은데,
// 멤버 함수로 만들까? "참조자"를 이용해서 독립함수로 만들까? -> 두개를 자유롭게 만들 줄 알아야함.
#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    double getArea() { return 3.14 * radius * radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this -> radius = radius; }
    void increaseCircle_1() { this -> radius += 1; } // 멤버 함수로 구현
};
Circle::Circle(){
    radius = 1;
    cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int radius){
    this -> radius = radius;
    cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle(){
    cout << "소멸자 실행" << endl;
}
void increaseCircle_2(Circle& ref) // 독립 함수로 구현
{
    int r = ref.getRadius();
    ref.setRadius(r+1);
}

int main()
{
    Circle waffle(30);
    waffle.increaseCircle_1(); // 멤버 함수 이용
    cout << waffle.getRadius() << endl;

    increaseCircle_2(waffle); // 독립 함수 이용
    cout << waffle.getRadius() << endl;    
}