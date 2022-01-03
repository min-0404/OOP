// 참조 리턴의 개념 !! 
#include <iostream>
using namespace std;

char& find(char s[], int index){ // 반환형이 참조형!!!
    return s[index];
}

int main()
{
    char name[] = "Mike";
    cout << name << endl;

    find(name, 0) = 'S';
    cout << name << endl;

    char& ret = find(name, 2);
    ret = 't';
    cout << name << endl;
}
