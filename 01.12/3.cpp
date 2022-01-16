// 퀴즈: 배열의 합을 구해서 리턴하는 제너릭 함수 add()구현하기
#include <iostream>
using namespace std;

template <typename T>
T add(T* arr, int len){
    T sum = 0;
    for(int i = 0; i < len; i++)
        sum += arr[i];
    return sum;
}
int main(){
    int arr1[] ={1,2,3,4,5};
    double arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << add(arr1, sizeof(arr1)/sizeof(int)) << endl;
    cout << add(arr2, sizeof(arr2)/sizeof(double)) << endl;
}