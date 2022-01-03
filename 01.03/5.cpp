// 퀴즈: 참조자를 활용해서 스택 구현하기
#include <iostream>
using namespace std;

class MyIntStack
{
private:
    int p[10]; // 용량은 10개
    int tos; // 스택의 top
public:
    MyIntStack();
    bool push(int n); // 정수 n 을 삽입
    bool pop(int &ref); // 삭제 : 삭제한 값을 ref에 저장해주는 기능 구현하자
};
MyIntStack::MyIntStack(){
    tos = -1;
}
bool MyIntStack::push(int n){
    if(tos == 9) // 스택이 꽉 찬 상태 
        return false;
    p[++tos] = n;
    return true;
}
bool MyIntStack::pop(int &ref){
    if(tos == -1) // 스택이 비어있는 상태
        return false;
    ref = p[tos--];
    return true;
}

int main()
{
    MyIntStack stack;
    for(int i = 0; i < 10; i++)
        if(stack.push(i))
            cout << i << " ";
    cout << endl << "Stack full" << endl;

    int n;
    for(int i = 0; i <10; i++)
        if(stack.pop(n))
            cout << n << " ";
    cout << endl << "stack empty" << endl;
}