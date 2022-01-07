// 퀴즈
// 연산자 오버로딩 구현 총정리
// 1. 연산자를 클래스 내부에서 구현
// 2. 연산자를 friend 이용해 외부에서 구현
// 3. 전위 연산자를 내부 또는 외부에서 구현
// 4. 후위 연산자(매개변수 있음)를 내부 또는 외부에서 구현
// 5. 반환형이 참조형일떄와 아닐때를 구분해서 작성

#include <iostream>
using namespace std;
class Complex
{
private:
    double re;
    double im;
public:
    Complex(double r){
        re = r;
        im = 0;
    }
    Complex(double r = 0, double i = 0) : re(r), im(i) {}
    void Output() { cout << re << "+" << im << "i" << endl;}
    Complex& operator+=(Complex c);
    Complex& operator-();
    friend Complex operator+(Complex& op1, Complex& op2);
    friend Complex operator++(Complex & op);         // 전위 연산자
    friend Complex operator++(Complex& op, int x);   // 후위 연산자
    friend ostream& operator<<(ostream& os, Complex& c);
};
Complex& Complex::operator+=(Complex c){
    this -> re += c.re;
    this -> im += c.im;
    return *this; // 반환형 주의!
}
Complex& Complex::operator-(){
    re *= -1;
    im *= -1;
    return *this; // 반환형 주의!
}
Complex operator+(Complex& op1, Complex& op2){
    return Complex(op1.re + op2.re, op1.im + op2.im); // 난 이렇게 무명객체로 반환하는게 좋더라
}
Complex operator++(Complex & op){
    op.re++;
    op.im++;
    return op; // 반환형 헷갈렸지? 꼭 이해하자
}
Complex operator++(Complex& op, int x){
    Complex temp = op; // 후위연산자 특징 : 일단 증가전의 값 저장해놔야함
    op.re++;
    op.im++;
    return temp;
}
ostream& operator<<(ostream& os, Complex& c){
    os << c.re << " + " << c.im << "i" << endl;
    return os;
}

int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    Complex c(9,200);
    c1.Output();
    c2.Output();
    
    c1+= c2;
    c1.Output();

    Complex c3 = c1 + c2;
    Complex c4 = c1 += c2, c5, c6;
    c3.Output();

    c5 = ++c4;
    c4.Output();
    c5.Output();

    c6 = c4++;
    c4.Output();
    c6.Output();

    c2 = -c2;
    cout << c2;
    cout << c;
}