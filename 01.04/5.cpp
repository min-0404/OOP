// 퀴즈 : 복사생성자와 setdata 함수 구현해보기 (조건 : 단 정수배열 p는 동적으로 할당해야함)
#include <iostream>
#include <string>
using namespace std;

class DeepCopyObject
{
    string name; // 복사생성자가 정의안해도 알아서 해줌
    int size;
    int* p; // 얘 때문에 복사생성자 필요함
public:
    DeepCopyObject(string name, int size); // 생성자
    DeepCopyObject(DeepCopyObject& d); // 복사 생성자
    void setdata(string name, int* y, int size);
    void showdata();
};
DeepCopyObject::DeepCopyObject(string name, int size){
    this -> name = name;
    this -> size = size;
    p = new int[size];
    for(int i = 0; i < size; i++)
        *((this -> p) + i) = i + 10; // 포인터를 이용해 나타내는 방법 사용해봄 ex) (arr + 3) = arr[3] = 100;
}
DeepCopyObject::DeepCopyObject(DeepCopyObject& d){
    this -> name = d.name;
    this -> size = d.size;
    if(this -> p) delete[]p;
    p = new int[size];
    for(int i = 0; i < size; i++)
        this -> p[i] = d.p[i];
}
void DeepCopyObject::setdata(string name, int* y, int size){
    this -> name = name;
    this -> size = size;
    if(this -> p) delete [] p;
    p = new int[size];
    for(int i = 0; i < size; i++)
        this -> p[i] = y[i];
}
void DeepCopyObject::showdata(){
    cout << name << endl;
    for(int i = 0; i <size; i++){
        cout << (this -> p)[i] << " ";
    }
    cout << endl;
}

int main()
{
    DeepCopyObject object01("kim", 3);
    DeepCopyObject object02(object01);
    object01.showdata();
    object02.showdata();

    int* dataArr = new int[5];
    for(int i =  0; i < 5; i++)
        dataArr[i] = i+1;

    object01.setdata("Lee", dataArr, 5);
    object01.showdata();
}