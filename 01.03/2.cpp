// 참조 매개 변수가 좋은 이유
#include <iostream>
using namespace std;

bool average (int* arr, int size, int& ref)
{
    if(size <= 0)
        return false;
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    ref = sum / size; // main 함수의 avg 값을 그대로 바꿔줄 수 있음
    return true;
}

int main()
{
    int x[] = {1,2,3,4,5,6};
    int avg;
    if(average(x, 6, avg))
        cout << "배열 x의 평균은 " << avg;
}
