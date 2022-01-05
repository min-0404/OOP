// string 클래스를 이용하면 깊은 복사 생성자가 필요없다!! -> 매우 편함
// string 클래스는 기본적으로 동적할당이다. 근데 클래스가 알아서 복사 처리해줌
#include <iostream>
#include <string>
using namespace std;

class Person
{
    string* name;
    int id;
public:
    Person(int id, string name);
    ~Person();
    void changeName(string name);
    void show() { cout << id << "," << *name << endl;}
};
Person::Person(int id, string name){
    this -> id = id;
    this -> name = new string(name);
}
Person::~Person(){
    if(name)
        delete name;
}
void Person::changeName(string name){
    this -> name = new string(name);
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
