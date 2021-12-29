// 문자열의 크기를 구하는 str.size() 사용해보기
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str;
    cout << "문자열 입력: ";

    getline(cin, str);
    int len = str.size();
    for(int i = 1; i <= len; i++)
    {
        for(int j = 0; j < i; j++)
            cout << str[j];
        cout << endl;
    }   
}