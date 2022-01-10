// protected 접근 지정자의 접근범위를 정확히 이해하자
// 자식 클래스는 부모 클래스의 proteced에 접근할 수 있다.
#include <iostream>
#include <string>
using namespace std;

class Point
{
protected:
    int x;
    int y;
public:
    void set(int x, int y);
    void showPoint();
};
void Point::set(int x, int y){
    this -> x = x;
    this -> y = y;
}
void Point::showPoint(){
    cout << x << " " << y << endl;
}

class ColorPoint:public Point 
{
private:
    string color;
public:
    void setColor(string color);
    void showColorPoint();
    bool equals(ColorPoint p);
};
void ColorPoint::setColor(string color){
    this -> color = color;
}
void ColorPoint::showColorPoint(){
    cout << color << ":";
    showPoint();
}
bool ColorPoint::equals(ColorPoint p){
    if(x == p.x && y == p.y && color == p.color)
        return true;
    else
        return false;
}

int main(){
    Point p;
    p.set(5,5);
    p.showPoint();

    ColorPoint cp1;
    cp1.set(10,10);
    cp1.setColor("Red");
    cp1.showColorPoint();

    ColorPoint cp2;
    cp2.set(3,4);
    cp2.setColor("Red");
    cp2.showColorPoint();
    
    cout << cp1.equals(cp2) << endl;
}