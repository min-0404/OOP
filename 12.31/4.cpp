// length(), substr(), stoi() 같은 다양한 문자열 함수들을 사용해보자
#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date(int y, int m, int d); // 생성자 1
    Date(string s); // 생성자 2
    void show();
    int getYear() {return year;}
    int getMonth() {return month;}
    int getDay() {return day;}
};

Date::Date(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}
Date::Date(string s)
{
    // idx1 은 첫번째 /의 인덱스, idx2 는 두번째 /의 인덱스
    int idx1 = s.find("/", 0);
    int idx2 = s.find("/", idx1);

    int len = s.length();
    year = stoi(s.substr(0, idx1));
    month = stoi(s.substr(idx1 + 1, idx2));
    day = stoi(s.substr(idx2 + 1, len));
}
void Date::show()
{
    cout << year << "년" << month << "월" << day << "일" << endl;
}
int main()
{
    Date birth(2014, 3, 20);
    birth.show();

    Date independanceDay("1945/8/15");
    independanceDay.show();
    
    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}