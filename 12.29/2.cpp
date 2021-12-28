// 문자열 입력 받기 : C언어를 이용한 구닥다리 방법
#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    cout << "주소를 입력하세요:";
    
    char address[100];
    cin.getline(address, 100, '\n');

    cout << "주소는 " << address << "입니다" << endl;
}