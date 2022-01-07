// 퀴즈: 스택 함수 구현하기 (매우 중요!!!!!!!!!!!!!!!!!!!!!!!!!1)
// 반환형이 참조형인 연산자의 오버로딩을 구현해보자
// return this(포인터) 와 return *this(값)의 차이점을 구분할줄 알아야한다.
#include <iostream>
using namespace std;

class Stack
{
private:
    int size;
    int* mem;
    int tos; // 초기값은 -1
public:
    Stack(int size = 4){
        this -> size = size;
        mem = new int[size];
        tos = -1;
    }
    ~Stack() { delete [] mem;}
    Stack& operator<<(int n); // push 구현
    Stack& operator>>(int& n); // pop 구현
    bool operator!();
};
Stack& Stack::operator<<(int n){
    this -> mem[++tos] =  n;
    return *this; // 자기자신을 리턴, 즉 반환형이 참조자니깐  this 가 아니라 *this 를 리턴해야함
    // this는 자기를 가리키는 "포인터" 이고, *this가 "자신의 값"이 니깐 반환형이 참조자면 *this 를 반환하는게 맞다.
}
Stack& Stack::operator>>(int& n){
    n = mem[tos--];
    return *this;
}
bool Stack::operator!(){
    if(tos == -1) return true;
    else return false;
}
int main(){
    Stack stack(10);
    stack << 1 << 2 << 3 << 4 << 5; // 스택에 1, 2, 3, 4, 5 푸시
    while(true){
        if(!stack) break;
        int x;
        stack >> x ; // 스택의 top 값 pop 해서 x에 저장
        cout << x << " ";
    }
    cout << endl;
}