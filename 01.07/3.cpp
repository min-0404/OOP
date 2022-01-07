//기초적인 "상속" 구현해보기 : 일단은 전부 public으로만 구현
#include <iostream>
#include <string>
using namespace std;
class Point
{
private:
    int x,y;
public:
    void set(int x, int y){
        this -> x = x;
        this -> y = y;
    }
    void showPoint(){
        cout << "(" << x << "," << y << ")" << endl;
    }
};
class ColorPoint: public Point //public 이므로 Point 클래스의 public만 사용가능(private의 변수 및 함수들 직접적으로 사용불가)
{
private:
    string color;
public:
    void setColor(string color){
        this -> color = color;
    }
    void showColorPoint();
};
void ColorPoint::showColorPoint(){
    cout << color << ":";
    showPoint();
}

int main(){
    Point p;
    ColorPoint cp;
    cp.set(3,4);
    cp.setColor("Red");
    cp.showColorPoint();
}