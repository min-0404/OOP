// 퀴즈 : 매우 중요!
// 자식 클래스의 객체를 생성할 때, 부모 클래스에 속하는 변수들을 설정하고 싶어.
// 근데 지금까진 set 함수 같은 거 만들어서 설정했는데 그냥 자식 클래스의 객체 생성할때 생성자로 설정하는 방법은 없을까?
// 이러한 방법이 가능한 이유는 뭘까?
// => 자식 클래스를 만들면, 부모 클래스의 생성자 호출 뒤 -> 자식 클래스의 생성자 호출 되기 때문이다.
#include <iostream>
#include <string>
using namespace std;

class Point
{
private:
    int x;
    int y;
protected:
    Point(int x, int y){
        this -> x = x;
        this -> y = y;
    }
    int getX() { return x;}
    int getY() { return y;}
    void move(int x, int y){ this -> x = x; this -> y = y; }
};

class ColorPoint: public Point 
{
private:
    string color;
public:
    ColorPoint() : Point(0,0){  // 생성자 1
        this -> color = "BLACK";
    }
    ColorPoint(int x, int y) : Point(x, y){ // 생성자 2
        this -> color = "BLACK";
    }
    ColorPoint(int x, int y, string color) : Point(x, y){ // 생성자 3
        this -> color = color;
    }
    void setPoint(int x, int y){
        move(x, y);
    }
    void setColor(string color){
        this -> color = color;
    }
    friend void show(ColorPoint&); // 전역함수로 구현
};
void show(ColorPoint& ref){
    cout << ref.color << " 색으로 " << ref.getX() << " , " << ref.getY() << " 에 위치한 점입니다." << endl;
}

int main(){
    ColorPoint zeroPoint;
    show(zeroPoint);

    ColorPoint cp(5,5);
    cp.setPoint(10,20);
    cp.setColor("BLUE");
    show(cp);

    ColorPoint cpRed(23, 33, "RED");
    show(cpRed);
}