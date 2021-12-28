// string 변수에 다양한 연산자를 사용할 수 있단느 것이 핵심
// string은 배열 기반 이다
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string song("Falling in love with you");
    string elvis("Elvis Presely");
    string singer;

    cout << song + "를 부른 가수는";
    cout << "힌트 : 첫글자는" << elvis[0] <<  "?";

    getline(cin, singer);
    if(singer == elvis)
        cout << "맞았습니다";
    else
        cout << "틀렸습니다" + elvis + "입니다" << endl; 
}