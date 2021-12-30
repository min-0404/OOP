//퀴즈 : 면적이 100이상인 원이 몇개인지 구해보자
#include <iostream>
using namespace std;

class Circle
{
    int radius;
public:
    Circle(){radius = 1;}
    Circle(int r){radius = r;}
    double getArea();
    void setRadius(int r);
};
double Circle::getArea() {return 3.14 * radius * radius;}
void Circle::setRadius(int r) {this -> radius = r;} //this는 뭐 넣어도되고 안넣어도 되고

int main ()
{
    Circle arr[3];
    // 이 3가지 방법 외우는 게 매우 중요 !!!
    arr[0].setRadius(5); // 방법 1
    (arr + 1) -> setRadius(6); // 방법 2
    (*(arr + 2)).setRadius(7); // 방법3

    int count = 0;
    for(int i = 0; i < 3; i++)
    {
        if(arr[i].getArea() > 100)
            count++;
    }
    cout << "면적이 100보다 큰 원은 " << count << "개 입니다" << endl;

}