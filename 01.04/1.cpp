// 얕은 복사 생성자의 문제점 수정
#include <iostream>
#include <cstring>
using namespace std;
#pragma warning(disable:4996) // 에러가 뜨지 않게 쓰는 명령어

class Person
{
    char* name;
    int id;
public:
    Person(int id, const char* name); // 생성자
    ~Person(); // 소멸자
    void changeName(const char* name);
    void show() { cout << id << "," << name << endl;}
};
Person::Person(int id, const char* name){
    this -> id = id;
    int len = (int)strlen(name);
    this -> name = new char[len+1];
    strcpy(this -> name, name);
}
Person::~Person(){
    if(name)
        delete[] name;
}
void Person::changeName(const char* name){
    if(strlen(name) > strlen(this -> name)) // 새로 입력한 이름이 더 긴 경우는 불가
        return;
    strcpy(this -> name, name);
}

int main()
{
    Person father(1, "kitae");
    Person daughter(father);
    cout << "daughter 객체 생성 직후 ---" << endl;
    father.show();
    daughter.show();

    daughter.changeName("Grace");
    cout << "daughter 이름을 Grace로 변경한 후 ---" << endl;
    father.show();
    daughter.show();
    return 0; // daughter, father 객체 소멸 -> 오류 발생
    //오류 발생 이유: 똑같은 메모리 공간에 대해 소멸자가 두번 실행되어서
    // 이와중에 daughter의 name에 할당 된 메모리 주소는 잃어버림
}

