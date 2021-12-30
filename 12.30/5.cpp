// 퀴즈: 원의 개수와 그 원들의 반지름을 입력받아서, 면적이 100이상인 원들의 개수를 구해라
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

int main()
{
    int number; // 원의 개수
    Circle* p = new Circle[number]; // 객체 배열 동적 할당의 장점: number를 몰라도 일단 배열 선언이 가능함
    //만약 동적 할당 안하고 정적할당 해도 될까?
    //당연히 안되지 현재 number 가 안정해졌으니 정적 할당은 에러뜸
    
    cout << "원의 개수:";
    cin >> number;

    int rad; // 각 원들의 반지름
    for(int i = 0; i < number; i++){
        cout << "원" << i << "의 반지름:";
        cin >> rad;
        p[i].setRadius(rad);}
    
    int count = 0;
    for(int i = 0; i < number; i++){
        if(p[i].getArea() > 100)
            count++;
    }
    cout << "면적이 100보다 큰 원은" << count << "개 입니다." << endl;
}