// 퀴즈 : 긴 문자열을 작성해보고, 만약 문자열안의 단어를 원하는 단어로 바꿔보자
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &입니다.";
    getline(cin, s, '&');
    cin.ignore(); // & 뒤에 따라오는 엔터키를 버퍼에서 제거하기 위한 코드. 만약 마지막 키가 엔터가 아니라면 ignore함수는 꼭 써줘야 함

    string findWord;
    string replaceWord;
    
    cout << endl << "find:";
    getline(cin, findWord, '\n');

    cout << "replace:";
    getline(cin, replaceWord, '\n');

    int startIndex = 0; 
    while(true)
    {
        int findex = s.find(findWord, startIndex);
        // find 함수는 찾으려는 문자열의 시작 인덱스를 반환해줌
        if(findex == -1) break; // find 함수는 원하는 문자열 못찾으면 -1 리턴
        s.replace(findex, findWord.length(), replaceWord);
        startIndex = findex + replaceWord.length(); // strartIndex 재설정해서 바꾼 단어 다음 부터 계속 탐색할 수 있게해줌
    }
    cout << s << endl;
}