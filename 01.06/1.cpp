// 유형 1. 외부함수(전역 함수)를 프렌드 함수로 선언해보기
#include <iostream>
using namespace std;

class Rect; // 전방 선언
bool equals(Rect r, Rect s); // 전방 선언

class Rect
{
private:
    int width;
    int height;
public:
    Rect(int width, int height){ // 생성자
        this -> width = width;
        this -> height = height;
    }
    friend bool equals(Rect r, Rect s); // 프렌드 선언 : equals 함수는 클래스 외부에 있지만, Rect 클래스의 모든 것을 사용할 수 있다.
};

bool equals(Rect r, Rect s){ // 전역 함수
    if(r.width == s.width && r.height == s.height)
        return true;
    else
        return false;
}

int main(){
    Rect a(3,4);
    Rect b(4,5);
    if(equals(a,b))
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;
}

