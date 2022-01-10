// 퀴즈 : 상속관계의 클래스에서, 생성자 호출되는 순서와 소멸자 호출되는 순서를 정확히 파악하자
#include <iostream>
#include <string>
using namespace std;

class Shape
{
private:
    int x;
    int y;
public:
    Shape() { cout << "Shape 생성자() 호출됨 " << endl; }
    Shape(int xloc, int yloc) : x(xloc), y(yloc) {
        cout << "Shape 생성자(" << xloc << "," << yloc << ") 호출됨 " << endl;
    }
    ~Shape(){
        cout << "Shape 소멸자() 호출됨 " << endl;
    }
};

class Rectangle: public Shape
{
private:
    int a;
    int b;
public:
    Rectangle(int x, int y, int a, int b) : Shape(x,y){
        this -> a = a;
        this -> b = b;
        cout << "Rectangle 생성자 호출됨" << endl;
    }
    ~Rectangle(){
        cout << "Rectangle 소멸자 호출됨" << endl;
    }
};

int main(){
    Rectangle(1, 1, 2, 2);
    // 결과: Shape 생성자 -> Rectangle 생성자 -> Rectangle 소멸자 -> Shape 소멸자
}