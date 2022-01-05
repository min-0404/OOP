#include <iostream>
#include <cstring>
#pragma warning(disable:4996) // 에러가 뜨지 않게 쓰는 명령어
using namespace std;

class Book
{
private:
    char* title;
    int price;
public:
    Book(const char* title, int price); // 생성자
    Book(Book& b); // 복사 생성자
    ~Book(); // 소멸자
    void set(const char* title, int price);
    void show();
};
Book::Book(const char* title, int price) {
    int len = strlen(title);
    this->title = new char[len + 1];
    strcpy(this -> title,title);
    this->price = price;
}
Book::Book(Book& b) {
    if (title) delete[] title;
    this->title = new char[strlen(b.title) + 1];
    strcpy(this->title, b.title);
    this->price = b.price;
}
Book::~Book() {
    delete[] title;
}
void Book::set(const char* title, int price) {
    if(this -> title) delete[] this -> title;
    int len = strlen(title);
    this->title = new char[len + 1];
    strcpy(this -> title, title);
    this->price = price;
}
void Book::show() {
    cout << title << " " << price << "원" << endl;
}

int main() {
    Book cpp("명품C++", 10000);
    Book java = cpp;
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}