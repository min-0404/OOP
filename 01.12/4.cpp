// 퀴즈 : 배열 안에 찾으려는 원소가 존재하는지 확인하는 search 함수를 템플릿으로 작성해보기
#include <iostream>
using namespace std;

template <class T>
bool search(T target, T* arr, int length){
    for(int i = 0; i < length; i ++){
        if(arr[i] == target)
            return true;
    }
    return false;
}


int main(){
    int x[] = {1, 10, 100, 5, 4};
    // x 안에 100이 있는지 확인해보자
    if(search(100, x, sizeof(x)/sizeof(int)))   
        cout << "100이 있습니다" << endl;
    else
        cout << "100이 없습니다" << endl;
    
    char y[] = {'h', 'e', 'l', 'o'};
    // y 안에 a가 있는지 확인해보자
    if(search('a', y, sizeof(y)/sizeof(char)))
        cout << "a가 있습니다" << endl;
    else
        cout << "a가 없습니다" << endl;
} 