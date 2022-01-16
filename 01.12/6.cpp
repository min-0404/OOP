//퀴즈: 포인트 클래스를 템플릿으로 작성하기
#include <iostream>
using namespace std;

template <class T>
class Point
{
private:
    T x, y;
public:
    Point(T a = 0, T b = 0): x(a), y(b) {}
    template <class T>
    friend ostream& operator<<(ostream& os, Point<T>& p);
};
template <class T>
ostream& operator<<(ostream& os, Point<T>& p){
    os << p.x << " " << p.y << endl;
    return os;
}
int main(){
    Point<int> a(3, 5);
    cout << a << endl;
    
    Point<double> b(1.5, 4.5);
    cout << b << endl;
}