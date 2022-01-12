//퀴즈
#include <iostream>
using namespace std;

template <typename T>
bool search(T x, T* arr, int len){
    for(int i = 0; i < len; i++){
        if(arr[i] == x)
            return true;
    }
    return false;
    
}

int main(){
    int x[] = {1, 10, 100, 5, 4};
    if(search(100, x, sizeof(x)/4))
        cout << "100이 배열x에 포함되어 있다";
    else
        cout << "100이 배열 x에 포함되어 있지 않다";
    cout << endl;

    char c[] = {'h', 'e', 'l', 'l', 'o'};
    if(search('e',c, 5))
        cout << "e가 배열 c에 포함되어 있는가?"
}