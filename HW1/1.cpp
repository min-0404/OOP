#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[10000];
    int alphabet_list[26] = {};
    cout << "문자열 입력:";
    cin.getline(str, 10000, ';');
    int len = strlen(str);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ') continue;
        else count++;
    }

    for (int i = 0; i < len; i++)
    {
        if (!isalpha(str[i]))
            continue;
        tolower(str[i]);
        switch (str[i])
        {
        case 'a':
            alphabet_list[0]++;
            break;
        case 'b':
            alphabet_list[1]++;
            break;
        case 'c':
            alphabet_list[2]++;
            break;
        case 'd':
            alphabet_list[3]++;
            break;
        case 'e':
            alphabet_list[4]++;
            break;
        case 'f':
            alphabet_list[5]++;
            break;
        case 'g':
            alphabet_list[6]++;
            break;
        case 'h':
            alphabet_list[7]++;
            break;
        case 'i':
            alphabet_list[8]++;
            break;
        case 'j':
            alphabet_list[9]++;
            break;
        case 'k':
            alphabet_list[10]++;
            break;
        case 'l':
            alphabet_list[11]++;
            break;
        case 'm':
            alphabet_list[12]++;
            break;
        case 'n':
            alphabet_list[13]++;
            break;
        case 'o':
            alphabet_list[14]++;
            break;
        case 'p':
            alphabet_list[15]++;
            break;
        case 'q':
            alphabet_list[16]++;
            break;
        case 'r':
            alphabet_list[17]++;
            break;
        case 's':
            alphabet_list[18]++;
            break;
        case 't':
            alphabet_list[19]++;
            break;
        case 'u':
            alphabet_list[20]++;
            break;
        case 'v':
            alphabet_list[21]++;
            break;
        case 'w':
            alphabet_list[22]++;
            break;
        case 'x':
            alphabet_list[23]++;
            break;
        case 'y':
            alphabet_list[24]++;
            break;
        case 'z':
            alphabet_list[25]++;
            break;
        default:
            break;
        }
    }

    char ASCII = 97;
    cout << "총 알파벳 수 : " << count << endl;
    for (int i = 0; i < 26; i++)
    {
        cout << ASCII++ << "(" << alphabet_list[i] << "): ";
        for (int j = 0; j < alphabet_list[i]; j++)
            cout << "*";
        cout << endl;
    }
}