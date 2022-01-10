// 퀴즈: 상속을 이용해서 큐를 구현하기
#include <iostream>
#include <string>
using namespace std;

class BaseArray
{
private:
    int capacity;
    int* mem;
protected:
    BaseArray(int capacity = 100){
        this -> capacity = capacity;
        mem = new int[capacity];
    }
    ~BaseArray() { delete [] mem; }
    void put (int index, int val) { mem[index] = val; }
    int get(int index) { return mem[index]; }
    int getCapacity() { return capacity; }
};
class MyQueue: public BaseArray
{
private:
    int head; // 원래 큐의 rear 역할
    int tail; // 원래 큐의 front 역할
    int size; // 큐 안의 데이터 개수
public:
    MyQueue(int capacity): BaseArray(capacity) {
        head = 0; 
        tail = -1; 
        size = 0;
    }
    void enqueue(int n){
        if(size == capacity()) //큐가 꽉 차 있을 때
            return;
        put(head++, n);
        head = head % capacity();
        size++;
    }
    int dequeue(){
        if(! size) // 큐가 비어있을때
            return -1;
        size--;
        tail++;
        tail = tail % capacity();
        return get(tail);
    }
    int capacity() { return getCapacity(); }
    int length() { return size; }
};

int main(){
    MyQueue mQ(100);
    int n;
    cout << "큐에 삽입할 5개의 정수를 입력하라>>";
    for(int i = 0; i <5; i++){
        cin >> n;
        mQ.enqueue(n);
    }
    cout << "큐의 용량: " << mQ.capacity() << " " << "큐의 크기: " << mQ.length() << endl;
    cout << "큐의 원소를 순서대로 제거하여 출력한다>>";
    while(mQ.length() != 0){
        cout << mQ.dequeue() << " ";
    }
    cout << endl << "큐의 현재크기: " << mQ.length() << endl;
}
