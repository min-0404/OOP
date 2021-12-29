// 입력받은 문자열에서 o가 몇개인지 찾기
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str;
    int count = 0;
    cout << "문자들을 입력해라" << endl;
    getline(cin, str);

    int i = 0; 
    while(str[i])
    {
        if(str[i] == 'o'){
            count++;}
        i++;
    }
    cout << "o의 개수는 " << count << endl;
}