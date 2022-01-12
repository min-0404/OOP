#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Circle
{
private:
    string name;
    int radius;
public:
    Circle(int radius = 1, string name = ""): radius(radius), name(name){}
    double getArea(){return 3.14 * radius * radius;}
    string getName(){return name;}
    bool operator<(Circle b);
    friend sort(Circle& a, Circle& b);
    friend void printVector(vector<Circle>& v);
    friend ostream& operator<<(ostream& os, vector<Circle>& b);
};
ostream& operator<<(ostream& os, vector<Circle>& b){
    for(int i = 0; i < b.size(); i++)
        os << b[i].name << " ";
    return os;
}
void printVector(vector<Circle>& v){
    cout << "모든 원소를 출력한다. >>";
    cout << v;
}
bool Circle::operator<(Circle b){
    if(this -> radius < b.radius)
        return true;
    else
        return false;
}
void sort(Circle& a, Circle& b){
    Circle temp = *a;
    for(int i = 0; i <  )
        
    
}

int main(){
    vector<Circle> v;
    v.push_back(Circle(2, "waffle"));
    v.push_back(Circle(3, "pizza"));
    v.push_back(Circle(1, "dotnet"));
    v.push_back(Circle(5, "pizzsLarge"));
    printVector(v);

    int it = v.size() - 1;
    sort(v.begin(), v.end());
    printVector(v);

    //cout << endl << "프랜드함수 "

    


}