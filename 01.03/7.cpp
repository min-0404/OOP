// 참조 리턴의 개념 : 매우 중요!
// 정수형 버전을 그대로 필기해놓았음
#include <iostream>
using namespace std;

char c = 'a'; // 전역 변수

char& find(){ // c의 참조 변수를 반환한다.
    return c;
}

int main()
{
    char& ref = find();  // ref와 c는 같은 기억공간, 같은 값을 가짐. int& ref 로 선언했으므로
    ref = 'm';
    cout << c << " " << ref << endl;
    
    char ch = find(); // ch는 c의 값만 복사해올 뿐, 다른 기억공간이다. 그냥 ch로 선언했으므로 
    cout << ch << " " << c << endl;

    find() = 'b'; // c 의 값 바꿔줌
    cout << c << " " << ref << " " << ch << endl;
}

