// 퀴즈 : Convertor클래스를 상속받아서 달러를 원화로 환산하는 WonToDollor 클래스를 작성하기
#include <iostream>
#include <string>
using namespace std;

class Converter
{
protected:
    double ratio; // 환율
    virtual double convert(double src) = 0; // src를 다른 단위로 변환한다.
    virtual string getSourceString() = 0; // 소스단위 명칭
    virtual string getDestString() = 0; // dest 단위 명칭
public:
    Converter(double ratio) { this -> ratio = ratio; }
    void run(){
        double src; // 환전하려는 금액
        cout << getSourceString() << "을" << getDestString() << "로 바꿉니다";
        cout << getSourceString() << "을 입력하세요>>";
        cin >> src;
        cout << "변환 결과:" << convert(src) << getDestString() << endl;
    }
};
class WonToDollor : public Converter
{
protected:
    double convert(double src) { return src / ratio; } // 가상 함수 구현
    string gerSourceString(){ return "원"; } // 가상 함수 구현
    string gerDestString() { return "달러";} // 가상 함수 구현
public:
    WonToDollor(double ratio) :Converter(ratio) {} // 상속의 특징을 활용한 생성자
};

int main(){
    //왜 오류 발생하는지 도무지 모르겠음
    //WonToDollor wd(1170);
    //wd.run();
}