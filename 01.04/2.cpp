// 1.cpp 를 깊은 복사를 정의해서 수정해보자
// 깊은 복사를 구현할때 주로 참조자를 활용한다
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    char* name;
    int id;
public:
    Person(int id, const char* name);
    ~Person();
    Person(Person& person); // 직접 정의해준 깊은 "복사 생성자"
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
Person::Person(Person& person){ // 깊은 복사 생성자
    this -> id = person.id;
    if(this -> name) // 만약 name 이 이미 있는 객체면 일단 삭제해줘야함
        delete [] name;
    int len = strlen(person.name);
    this -> name = new char[len+1];
    strcpy(this -> name, person.name);
    cout << "복사 생성자 실행 " << this -> name << endl;
}
void Person::changeName(const char* name){
    if(strlen(name) > strlen(this -> name)) // 원래 name보다 더 긴 name은 설정할 수 없음
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
    return 0;
}
