// 함수 오버로딩 퀴즈: 별 건 아니고 삼항 연산자 쓰는 법만 되집고 넘어가자
#include <iostream>
using namespace std;

int big(int a, int b){
    int m = (a>b)? a : b;
    return (m>100)? 100 : m;
}
int big(int a, int b, int c){
    int m = (a>b)? a : b;
    return (m > c)? c:m;
}


int main()
{
    int x = big(3,5);
    int y = big(300, 60);
    int z = big(30, 60, 50);
    cout << x << " " << y << " " << z << endl;
}

