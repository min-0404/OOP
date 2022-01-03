// call by adress & call by refernce
#include <iostream>
using namespace std;

void swap1(int* a, int* b) // 포인터 이용
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap2(int& a, int& b) // 참조자 이용
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10;
    int y = 20;
    swap1(&x, &y);
    cout << x << " " << y << endl;

    swap2(x, y);
    cout << x << " " << y;
}