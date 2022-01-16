// "제너릭 클래스" -> 제일 중요 !!! , 포인터의 총괄적인 개념을 다시 짚어볼 수 있음
// 스택을 제너릭 클래스로 구현하면, 온갖 다양한 원소들을 스택에 저장할 수 있다.
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Stack
{
private:
    T data[100];
    int tos;
public:
    Stack();
    void push(T element);
    T pop();
};

template <class T>
Stack<T>::Stack(){
    tos = -1;
}
template <class T>
void Stack<T>::push(T element){
    data[++tos] = element;
}
template <class T>
T Stack<T>::pop(){
    return data[tos--];
}

class Point
{
private:
    int x, y;
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    void show() {cout << x << " " << y << endl; }
};

int main(){
    // 1. int 형을 저장하는 스택 구현
    Stack<int> stack1;
    stack1.push(100);
    cout << stack1.pop() << endl;
    
    // 2. int* 형을 저장하는 스택 구현
    Stack<int*> stack2;
    int* arr = new int[3];
    for(int i = 0; i < 3; i++)  arr[i] = i;
    stack2.push(arr);
    int* result = stack2.pop();
    for(int i = 0; i < 3; i++)
        cout << result[i] << " ";
    cout << endl;

    // 3. Point 형을 저장하는 스택 구현
    Point a(1,2);
    Point b;
    Stack<Point> stack3;
    stack3.push(a);
    b = stack3.pop();
    b.show();

    // 4. Point* 형을 저장하는 스택 구현

    Stack<Point*> stack4;
    stack4.push(new Point(1,2));
    Point* p = stack4.pop();
    p -> show();
    
    // 또는
    //Point* p;
    //Point c(100, 200);
    //p = &c;
    //Stack<Point*> stack4;
    //stack4.push(p);
    //Point* pp = stack4.pop();
    //pp -> show();
}

