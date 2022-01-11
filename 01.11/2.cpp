// 자식클래스 Circle과 Square에서 오버라이딩 함수 구현해보기
#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
    void paint() { draw(); }
    virtual void draw() { cout << "Shape::draw() called" << endl; }
};

class Circle: public Shape
{
public:
    virtual void draw() { cout << "Circle::draw() called" << endl; }
};
class Square: public Shape
{
public:
    virtual void draw() { cout << "Square::draw() called" << endl; }
};

int main(){
    
    Shape* pShape = new Circle(); // 업캐스팅
    pShape -> paint(); // draw() 가 호출됨 (동적바인딩에 의해 Circle의 draw 가 호출됨)
    delete pShape;

    Shape* pShape2 = new Square(); // 업캐스팅
    pShape2 -> paint(); // 동적바인딩에 의해 Square의 draw가 호출 됨
    delete pShape2;
}