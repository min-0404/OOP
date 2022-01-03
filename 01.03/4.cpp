// 객체의 반지름을 입력받아서, 새로 설정하는 함수를 만들고 싶은데,
// 멤버 함수로 만들까? 참조자 써서 독립함수로 만들까?
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
    void readRadius_1(); // 멤버 함수로 구현
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
void Circle::readRadius_1(){
    int r;
    cout << "정수 값으로 반지름을 입력하세요:";
    cin >> r;
    this -> radius = r;
}
void readRadius_2(Circle& ref){
    int r;
    cout << "정수 값으로 반지름을 입력하세요:";
    cin >> r;
    ref.setRadius(r);
}

int main()
{
    Circle donut;
    donut.readRadius_1(); // 멤버 함수 이용
    cout << donut.getArea() << endl;

    Circle pizza;
    readRadius_2(pizza); // 독립 함수 이용
    cout << pizza.getArea() << endl;
}