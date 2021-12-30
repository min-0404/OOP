//클래스 작성해보기
#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;
public:
    Complex(int x, int y): a(x), b(y) {}
    void ShowComplex(); 
};
void Complex::ShowComplex() { cout << a << b << endl;}
int main()
{
    Complex x(4, 5);
    Complex y(20, 10);
    x.ShowComplex();
    y.ShowComplex();
}