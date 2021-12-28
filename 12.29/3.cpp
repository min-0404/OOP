// 문자열 입력 받기 : C++의 좋은 방법
#include <iostream>
#include <string> // string 헤더파일을 이용해보자
using namespace std;

int main ()
{
    cout << "주소를 입력하세요:";
    
    string address; // string 변수!!
    getline(cin, address);

    cout << "주소는 " << address << "입니다" << endl;
}