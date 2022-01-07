#include <iostream>
#include <string>
using namespace std;
class Histogram
{
private:
    int count[26];
    string str;
public:
    Histogram(string s);
    void makeHisto();
    void operator!();
    Histogram& operator<<(string s);
    Histogram& operator<<(char c);
};
Histogram::Histogram(string s){
    str = s;
    makeHisto(); // 생성자 실행시 count배열에 알파벳순 개수가 기록됨
}
void Histogram::makeHisto(){
    //1단계 : 먼저, count 배열 초기화
    for(int i = 0; i < 26; i ++) count[i] = 0;
    
    //2단계 : 문자열의 길이 구함
    int len = str.length();

    //3단계 : 문자열 순회하면서 count 배열 작성
    for (int i = 0; i < len; i++)
    {
        if (!isalpha(str[i])) continue;
        switch (tolower(str[i])){
            case 'a': count[0]++; break;
            case 'b': count[1]++; break;
            case 'c': count[2]++; break;
            case 'd': count[3]++; break;
            case 'e': count[4]++; break;
            case 'f': count[5]++; break;
            case 'g': count[6]++; break;
            case 'h': count[7]++; break;
            case 'i': count[8]++; break;
            case 'j': count[9]++; break;
            case 'k': count[10]++; break;
            case 'l': count[11]++; break;
            case 'm': count[12]++; break;
            case 'n': count[13]++; break;
            case 'o': count[14]++; break;
            case 'p': count[15]++; break;
            case 'q': count[16]++; break;
            case 'r': count[17]++; break;
            case 's': count[18]++; break;
            case 't': count[19]++; break;
            case 'u': count[20]++; break;
            case 'v': count[21]++; break;
            case 'w': count[22]++; break;
            case 'x': count[23]++; break;
            case 'y': count[24]++; break;
            case 'z': count[25]++; break;
            default: break;
        }
    }
}
void Histogram::operator!(){
    cout << str << endl;
    cout << endl;

    int len = str.length(); // 문자열의 길이
    int total = 0; // 알파벳 개수(띄어쓰기, 따옴표 등 제외)만 저장할 변수
    for(int i = 0; i < len; i++)
        if(isalpha(str[i])) total++;

    char ASCII = 97;
    cout << "총 알파벳 수 : " << total << endl;
    for (int i = 0; i < 26; i++)
    {
        cout << ASCII++ << ":";
        for (int j = 0; j < count[i]; j++)
            cout << "*";
        cout << endl;
    }
}
Histogram& Histogram::operator<<(string s){
    str += s;  
    makeHisto(); // 새로운 문자열 추가될때마다 히스토그램 초기화
    return *this;
}
Histogram& Histogram::operator<<(char c){
    str += c;
    makeHisto(); // 새로운 문자열 추가될때마다 히스토그램 초기화
    return *this;
}

int main(){
    Histogram song("Wise men say, \nonly fools rush in But I can't help, \n");
    song << "falling" << "in love with you." << "-by ";
    song << 'k' << 'i' << 't';
    !song;
}
