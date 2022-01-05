// 디폴트 매개변수 가진 함수 만들어보기
#include <iostream>
using namespace std;

// f() : 한 줄에 빈 칸 10개를 출력
// f('%') : 한 줄에 %를 10개 출력
// f('@', 5) : 다섯 줄에 @를 10개 출력

void f(char c = ' ', int line = 1);

void f(char c, int line){
    for(int i = 0; i < line; i++){
        for(int j = 0; j < 10; j++)
            cout << c;
        cout << endl;
    }
}

int main(){
    f();
    f('%');
    f('@', 5);
}