// 다양한 생성자 가진 클래스 작성해보기
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int x;
    int y;
public:
    Rectangle() // 생성자1
    {
        x = 1;
        y = 1;
    }
    Rectangle(int a, int b) // 생성자 2
    {
        x = a;
        y = b;
    }
    Rectangle(int z) // 생성자 3
    {
        x = z;
        y = z;
    }
    bool isSquare(); // 정사각형인지 확인
};
bool Rectangle::isSquare()
{
    if(x == y) return true;
    else return false;
}

int main()
{
    Rectangle rect1;
    Rectangle rect2(3,5);
    Rectangle rect3(3);

    if(rect1.isSquare()) cout << "rect1은 정사각형이다" << endl;
    if(rect2.isSquare()) cout << "rect2은 정사각형이다" << endl;
    if(rect3.isSquare()) cout << "rect3은 정사각형이다" << endl;
}