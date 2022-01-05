// 디폴트 매개변수를 이용해 함수를 간소화해보자
#include <iostream>
using namespace std;

/* void fillLine(){
    for(int i = 0; i < 25; i++)
        cout << "*";
    cout << endl;
}
void fillLine(int n, char c){
    for(int i = 0; i < n; i++)
        cout << c;
    cout << endl;
} */
// 위 두개의 함수를 하나의 함수로 만들어보기

void fillLine(int n = 25, char c = '*'){
    for(int i = 0; i < n; i++)
        cout << c;
    cout << endl;
}

int main(){
    fillLine();
    fillLine(10, '%');
}