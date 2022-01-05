// 퀴즈: 어제 만들었던 두개의 big함수를 디폴트 매개변수를 이용해 한개의 big 함수로 합쳐보기
#include <iostream>
using namespace std;

int big(int a, int b, int c = 0){
    int m = (a>b)? a:b;
    if(!c)
        return (m>100)? 100:m;
    else
        return (m>c)? c:m;
}


int main(){
    int x = big(3,5);
    int y = big(300, 60);
    int z = big(30, 60, 50);
    cout << x << " " << y << " " << z << endl;

}