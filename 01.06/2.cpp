// 유형 2 . "다른 클래스의 멤버함수"를 프렌드로 선언해보기
#include <iostream>
using namespace std;

class Rect; // 전방 선언
class RectManager
{
public:
    bool equals(Rect r, Rect s);
};

class Rect
{
private:
    int width;
    int height;
public:
    Rect(int width, int height){
        this -> width = width;
        this -> height = height;
    }
    friend bool RectManager::equals(Rect r, Rect s); // 다른 클래스의 멤버함수를 프렌드로 선언
};

bool RectManager::equals(Rect r, Rect s){
    if(r.width == s.width && r.height == s.height)
        return true;
    else
        return false;
}

int main(){
    Rect a(3,4);
    Rect b(3,4);
    RectManager man;
    
    if(man.equals(a,b))
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;
}