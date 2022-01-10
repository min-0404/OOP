// 조금 어려운 퀴즈 : Circle클래스를 바탕으로 NamedCircle 클래스를 구현하고, 외부함수로 biggest 함수를 구현해보자
#include <iostream>
#include <string>
using namespace std;

class Circle
{
private:
    int radius;
public:
    Circle(int radius = 0) { this -> radius = radius;}
    int getRadius() { return radius;}
    void setRadius(int radius) {this -> radius = radius;}
    double getArea() { return 3.14 * radius * radius;}
};

class NamedCircle : public Circle
{
private:
    string name;
public:
    NamedCircle(){} // 객체 배열을 위한 기본 생성자
    NamedCircle(int radius, string name) : Circle(radius){
        this -> name = name;
    }
    void show(){
        cout << "반지름이" << getRadius() << "," << "이름이" << name << "인 원" << endl;
    }
    void set(int r, string name){
        setRadius(r);
        this -> name = name;
    }
    friend string biggest(NamedCircle* arr, int len);
};
string biggest(NamedCircle* arr, int len){
    int max = 0;
    for(int i = 1; i < len; i++){
        if(arr[max].getArea() < arr[i].getArea())
            max = i;
    }
    return arr[max].name; 
}


int main(){
    NamedCircle c[5];
    cout << "5개의 정수 반지름과 원의 이름을 입력하세요" << endl;
    for(int i = 0; i < 5; i++){
        int r;
        string name;
        cout << i+1 << ">>";
        cin >> r;
        getline(cin, name);
        if(r <= 0){
            cout << "다시 입력하세요" << endl;
            i--;
            continue;
        }
        c[i].set(r, name);
    }
    cout << "가장 면적이 큰 피자는" << biggest(c,5) << "입니다" << endl;

}