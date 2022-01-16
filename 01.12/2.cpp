// 질문 1 .템플릿 함수와 일반 함수가 있을 때 이 두 함수는 공존 가능할까?
// 질문 2. 어떤 함수가 호출될까?
#include <iostream>
using namespace std;

template <typename T> // 템플릿 함수
T Sum(T a, T b){
    cout << "템플릿 함수가 호출됩니다" << endl;
    return a + b;
}

int Sum(int a, int b){ // 일반 함수
    cout << "일반함수를 호출합니다" << endl;
    return a + b;
}

int main(){
    cout << Sum(1,2) << endl; // 일반함수 호출됨
    cout << Sum(1.1, 2.2) << endl; // 템플릿 호출됨
    cout << Sum('1', '2') << endl; // 템플릿 호출됨
    // 결과: 공존 가능하다.
    // 템플릿보단 가능하다면 일반함수가 먼저 호출됨
}