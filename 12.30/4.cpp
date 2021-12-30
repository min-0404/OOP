// for문 완성해보기: 포인터와 객체배열의 접근법 꼭 외우자
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
    Circle arr[3] = {Circle(10), Circle(20), Circle()};
    Circle* p = arr;
    
    for(int i = 0; i < 3; i++)
        cout << "arr[]" << i << "의 면적은 " << arr[i].getArea() << endl;
    
    for(int i = 0; i < 3; i++)
        cout << "*(arr+i)" << i << "의 면적은 " << (*(arr + i)).getArea() << endl;

    for(int i = 0; i < 3; i++)
        cout << "p[i] " << i << "의 면적은 " << p[i].getArea() << endl;

    for(int i = 0; i < 3; i++)
        cout << "*(p+i)" << i << "의 면적은 " << (*(p + i)).getArea() << endl;

    for(int i = 0; i < 3; i++, p++)
       cout << "p ->" << i << "의 면적은 " << p -> getArea() << endl;

    //이 방법은 절대 안된다!
    //for(int i = 0; i < 3; i++, arr++)
    //    cout << arr -> getArea() << endl;


}