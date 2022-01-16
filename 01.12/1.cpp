// 제너릭함수란? mySwap()함수 구현해보기
#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;
public:
    Circle(int radius = 1){ this -> radius = radius; }
    int getRadius() { return radius; }
};

template <class T>
void mySwap(T& a, T& b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 4;
    int b = 5;
    mySwap(a, b);
    cout << a << " " << b << endl;

    double c = 0.3;
    double d = 1.5;
    mySwap(c, d);
    cout << c << " " << d << endl;

    Circle donut(5);
    Circle pizza(10);
    mySwap(donut, pizza);
    cout << donut.getRadius() << " " << pizza.getRadius() << endl;
}
