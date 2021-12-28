// 배열에 실수를 저장하고, 가장 큰 실수 찾기
#include <iostream>
using namespace std;

double biggest(double* arr, int size)
{
    int max = 0;
    for(int i = 0; i < size; i++)
        for(int j = i; j < size; j ++)
            if(arr[max] > arr[i])
                max = i;
    return arr[max];
}


int main ()
{
    double a[5];
    cout << "5개의 실수를 입력해라";
    for(int i = 0; i < 5; i ++)
        cin >> a[i];
    cout << "제일 큰 수 = " << biggest(a,5) << endl;

}