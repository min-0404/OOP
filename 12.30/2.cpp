// 포인터를 통해 "객체배열" 에 접근해보기
#include <iostream>
using namespace std;
class Circle
{
    int radius;
public:
    Circle(){radius = 1;}
    Circle(int r){radius = r;}
    double getArea();
    void setRadius(int r) { radius = r;}
};
double Circle::getArea() { return 3.14 * radius * radius; }

int main()
{
    Circle arr[3];
    arr[0].setRadius(10);
    arr[1].setRadius(20);
    arr[2].setRadius(30);

    for(int i = 0; i < 3; i++)
        cout << arr[i].getArea() << " ";
        cout << endl;   
    
    Circle* p; // 객체 배열을 가리키는 포인터
    p = arr; // arr = &arr[0] 과 같으므로 어차피 둘다 주소값이니깐
    for(int i = 0; i < 3; i++)
        cout << p[i].getArea() << " ";
        //또는 cout << (p + i) -> getArea() << " ";
    
    // 주의!!!!
    // p[i] -> getArea() 하면 안된다
}