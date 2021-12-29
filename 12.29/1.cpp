//클래스 작성해보기
#include <iostream>
using namespace std;

class Tower
{
private:
    int height;
public:
    Tower() {height = 1;} // 2개의 생성자
    Tower(int h) : height(h) {}
    int getHeight();
    void setHeight(int h);
};
int Tower::getHeight()
{
    return height;
}
void Tower::setHeight(int h)
{
    height = h;
}

int main()
{
    Tower myTower;
    Tower seoulTower(100);
    cout << "높이는" << myTower.getHeight() << "미터" << endl;
    cout << "높이는" << seoulTower.getHeight() << "미터" <<endl;

}