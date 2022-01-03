// 5.cpp 퀴즈를 동적메모리로 바꿔보기 (원래는 용략 10으로 고정)
#include <iostream>
using namespace std;

class MyIntStack
{
private:
    int* p; 
    int capacity;
    int tos;
public:
    MyIntStack(int c);
    bool push(int n);
    bool pop(int &ref);
};
MyIntStack::MyIntStack(int c){
    capacity = c;
    p = new int[capacity];
    tos = -1;
}
bool MyIntStack::push(int n){
    if(tos == capacity - 1)
        return false;
    p[++tos] = n;
    return true;
}
bool MyIntStack::pop(int &ref){
    if(tos == -1)
        return false;
    ref = p[tos--];
    return true;
}

int main()
{
    MyIntStack a(20);
    for(int i = 0; i < 20; i++)
        if(a.push(i))
            cout << i << " ";
    cout << endl << "Stack full" << endl;
    
    int n;
    for(int i = 0; i <20; i++)
        if(a.pop(n))
            cout << n << " ";
    cout << endl << "stack empty" << endl;
}