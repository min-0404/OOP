// 제일 어려운 퀴즈
// 알고리즘 헤더 파일에는 sort함수가 정의되어 있는데, sort 할 때 <를 사용한다.
// 그런데 int 같은 기본 자료형은 operator<를 정의하지 않아도 알아서 인식해서 실행하는데,
// 만약 sort대상이 사용자 정의 클래스라면, 이때 oeprator< 를 따로 정의해주어야 한다.
// 이것을 구현해보자
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Circle
{
private:
    string name;
    int radius;
public:
    Circle(int radius = 1, string name = ""): radius(radius), name(name) {}
    double getArea() {return 3.14 * radius * radius;}
    string getName(){ return name; }
    bool operator<(Circle b);
    friend ostream& operator<<(ostream& os, vector<Circle>& v);
};
void printVector(vector<Circle>& v){
    for(int i = 0; i < v.size(); i++)
        cout << v[i].getName() << " ";
    cout << endl;
}
ostream& operator<<(ostream& os, vector<Circle>& v){
    for(int i = 0; i < v.size(); i++)
        os << v[i].getName() << " ";
    return os;
}
bool Circle::operator<(Circle b){ // sort 함수를 위해 꼭 따로 구현해주어야 한다!!
    if(this -> radius < b.radius) return true;
    else return false;
}

int main(){
    vector<Circle> v;
    v.push_back(Circle(2, "waffel"));
    v.push_back(Circle(3, "pizza"));
    v.push_back(Circle(1, "dotnet"));
    v.push_back(Circle(5, "pizzaLarge"));
    printVector(v);
    
    int it = v.size();
    sort(&v[0], &v[it]); // 이것은 sort(v.begin(), v.end()) 와 완전히 동일하다
    printVector(v);

    cout << endl << "프렌드 함수 operator";
    cout << "로 출력하는 경우" << endl;
    cout << v << endl;
}