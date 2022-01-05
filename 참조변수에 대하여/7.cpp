//배열의 참조 반환
#include <iostream>
using namespace std;

int& find(int* s, int index){
    return s[index];
}

void printArr(int* s, int count){
    for(int i = 0; i < count; i ++)
        cout << s[i] << " ";
    cout << endl;
}

int main(){
    int score[] = {11, 22, 33, 44, 55};
    int index = 3;
    int size = sizeof(score) / sizeof(int);
    int& a = find(score, index);
    find(score, index) = 400;
    printArr(score, size);
    cout << &a << " " << a << endl;
    cout << &score[index] << " " << score[index] << endl;

    a = 5000;
    printArr(score, size);
    cout << & a << " " << a << endl;
    cout << &score[index] << " " << score[index] << endl;
}