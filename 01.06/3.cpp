// 유형 3. "다른 클래스 전체"를 프렌드로 선언해보기
#include <iostream>
using namespace std;

class Rect; // 전방 선언

class RectManager // 2개의 함수 가지고 있음
{
public:
    bool equals(Rect r, Rect s);
    void copy(Rect& dest, Rect& src);
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
    friend RectManager; // RectManager 클래스 전체를 프렌드로 선언 : RectManager의 모든 함수들은 Rect의 모든 것을 자유롭게 사용가능
};

bool RectManager::equals(Rect r, Rect s){
    if(r.width == s.width && r.height == s.height)
        return true;
    else
        return false;
}
void RectManager::copy(Rect& dest, Rect& src){
    dest.width = src.width;
    dest.height = src.height;
}

int main(){
    Rect a(3,4);
    Rect b(5,6);
    RectManager man;

    man.copy(b,a);
    if(man.equals(a,b))
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;
}
