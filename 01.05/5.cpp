// 수업시간에 배운 "접근 도형"에 대해서 다시 생각해보는 문제
#include <iostream>
using namespace std;

class Circle
{
private:
    static int numOfCircles;
    int radius;
public:
    Circle(int r = 1); // 생성자도 non-static이다 -> static멤버 사용가능 (numOfCircles 변수를 조작 가능)
    ~Circle() {numOfCircles--;} // 소멸자도 non-static이다 -> static멤버 사용가능 (numOfCircles 변수를 조작 가능)
    double getArea() { return 3.14 * radius * radius;} // non-static 함수 : 원한다면 static멤버 마음껏 사용가능
    static int getNumOfCircles() { return numOfCircles;}  //static함수: radius, getArea() 같은 non-static 절대 사용불가
};
Circle::Circle(int r){
    radius = r;
    numOfCircles++;
}
int Circle::numOfCircles = 0; // static 멤버 변수는 미리 선언해줘야함

int main(){
    Circle* p =new Circle[10];
    cout << "생존하고 있는 원의 개수:" << Circle::getNumOfCircles() << endl;
    
    delete[] p;
    cout << "생존하고 있는 원의 개수:" << Circle::getNumOfCircles() << endl;

    Circle a;
    cout << "생존하고 있는 원의 개수:" << Circle::getNumOfCircles() << endl;

    Circle b;
    cout << "생존하고 있는 원의 개수:" << Circle::getNumOfCircles() << endl;    
}

// 정리)
// 원한다면, getArea(){return numOfCircles * radius * radius; } 이런식으로 맘대로 구현 가능
// 하지만, getNumOfCircles(){ return radius * numOfCircles; } 절대 불가 -> static 함수에서 non-static멤버 함수나 변수 사용불가!!