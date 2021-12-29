// stoi()함수 사용법
#include <iostream>
#include <string>
using namespace std;

class Interger
{
private:
    int number;
public:
    Interger(int n) { number = n;}
    Interger(string s) { number = stoi(s);}
    void set(int n){ number = n;}
    int get() { return number;}
    bool isEven() { return number % 2 == 0 ? true:false;}
};

int main()
{
    Interger n(30);
    cout << n.get() << " ";
    n.set(50);
    
    cout << n.get() << " ";
    Interger m("300");
}