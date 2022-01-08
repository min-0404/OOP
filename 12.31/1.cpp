// 5개의 "string 배열"을 선언하고 getline() 을 이용하여
// 문자열을 입력 받아 사전 순으로 가장 뒤에 나오는 문자열을 출력하라.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[5]; // "문자열 배열" 선언
    for(int i = 0; i < 5; i++){
        cout << "이름";
        getline(cin, names[i], '\n'); // '\n' 은 생략가능 : 디폴트가 엔터임
    }

    string latter = names[0]; // 순차 탐색으로 찾아내기
    for(int i = 1; i <5; i++){
        if(latter < names[i]){ // 문자열에 관계 연산자를 사용할 수 있다.
            latter = names[i];
        }
    }
    cout << "사전에서 가장 뒤에 나오는 문자열은" << latter <<endl;
}

