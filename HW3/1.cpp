#include <iostream>
using namespace std;

class Sample
{
    int* p; // 정수 저장할 배열
    int capacity; // 용량
    int size; // 정수 개수
public:
    Sample(int n)
    {
        capacity = n;
        p = new int[n];
    }
    void read();
    void write();
    int big();
    int getSize(){return size;}
    ~Sample() {delete [] p;}
};
void Sample::read()
{
    cout << "입력할려는 정수의 갯수는?";
    cin >> size;
    
    cout << size << "개의 정수를 입력하시오";
    for(int i = 0; i < size; i++)
        cin >> p[i];
}
void Sample::write()
{
    for(int i = 0; i < size; i++)
        cout << p[i] << " ";
    cout << endl;
}
int Sample::big()
{
    int max = 0;
    for(int i = 1; i < size; i++)
        if(p[max] < p[i] )
            max = i;
    return p[max];
}

int main()
{
    Sample s(10); // 10개 동적 정수 배열을 가진 Sample 객체 생성
    s.read(); // 키보드에서 정수 배열 읽기
    cout << "동적배열 정수" << s.getSize() << "개를 출력합니다.";
    s.write(); // 정수 배열 출력
    cout << "가장 큰 수는 " << s.big() << endl; // 가장 큰 수 출력

}