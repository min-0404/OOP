// 생성자 매개변수의 전달
#include <iostream>
#include <string>
using namespace std;

class TV
{
private:
    int size;
public:
    TV(){ int size = 20; } // 기본 생성자
    TV(int size){ this -> size = size; } // 생성자
    int getSize() { return size; }
};

class WideTV : public TV
{
private:
    bool videoln;
public:
    WideTV(int size, bool videoln) : TV(size){
        this -> videoln = videoln;
    }
    bool getVideoln(){ return videoln; }
};

class SmartTV : public WideTV
{
private:
    string ipAddr;
public:
    SmartTV(string ipAddr, int size) : WideTV(size, true) {
        this -> ipAddr = ipAddr;
    }
    string getipAddr() { return ipAddr; }
};

int main(){
    SmartTV htv("192.0.0", 32);
    cout << htv.getSize() << endl;
    cout << boolalpha << htv.getVideoln() << endl;
    cout << htv.getipAddr() << endl;
}