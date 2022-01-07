// 얕은 복사와 깊은 복사의 개념
#include <iostream>
using namespace std;

int main(){
    int* a = new int(3);
    int* b = new int(5);
    cout << *a << " " << a << endl; // a의 값과 주소
    cout << *b << " " << b << endl; // b의 값과 주소


    a = b; // 얕은 복사 : 포인터 변수 a는 이제 b를 가리킨다.
    *b = 10;
    cout << *a << " " << a << endl; // a의 값과 주소
    cout << *b << " " << b << endl; // b의 값과 주소
    
    delete a;
    delete b; // 여기서 에러발생
    // 원인 : a랑 b는 사실상 같은 곳을 가리키고 있고, delete a 해서 삭제했는데,
    // delete b하면 더이상 삭제할게 없으므로 에러발생
    // 메모리 누수: 더이상 a가 가리켰던 주소는 잃어버리게 되서 찾지 못한다.
}