// 입력받은 문자열 회전시키기
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "문자열을 입력하세요(한글 안됨)";
    getline(cin, s, '\n');
    int len = s.length(); // string 함수 사용

    for(int i = 0; i < len; i++){
        // substr 함수(문자열 추출 함수) : substr(시작 인덱스, 크기)
        string first = s.substr(0, 1); //맨앞의 문자 1개를 문자열로 분리
        string sub = s.substr(1, len-1); // 나머지 문자들을 문자열로 분리
        s = sub + first; // + : 연산자 오버로딩
        // s = sub.append(first)와 동일
        cout << s <<endl;
    }
}

