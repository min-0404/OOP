// 퀴즈 (오류 이유 모르겟음)
#include <iostream>
#include <cstring>
using namespace std;

class mystring
{
private:
    char* pbuf;
public:
    mystring(const char* s = NULL);
    mystring(mystring& s);
    void print();
    int getsize();
    ~mystring();
};
mystring::mystring(const char* s){
    if(s == NULL){
        pbuf = new char[1];
        pbuf[0] = NULL;
    }
    else{
        pbuf = new char[strlen(s) + 1];
        strcpy(pbuf, s);
    }
}
mystring::mystring(mystring& s){
    pbuf = new char[s.getsize() + 1];
    strcpy(pbuf, s.pbuf);
}
mystring::~mystring(){
    if(pbuf) delete[] pbuf;
}
void mystring::print(){
    cout << pbuf << endl;
}
int mystring::getsize(){
    return strlen(pbuf);
}

int main(){
    mystring str1;
    mystring str2("Hello");
    mystring str3 = "World";
    mystring str4(str3);

    str1.print();
    str2.print();
    str3.print();
    str4.print();
    return 0;

}