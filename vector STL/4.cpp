// 벡터는 스택처럼 맨뒤에 push_back 과 pop_back으로 삽입삭제가 기본이다
// 중간에 반복자를 이용해 삽입은 가능하지만, 그닥 좋진 않다
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // 일단 이터레이터 생성
    vector<int>::iterator iter;
    iter = v.begin(); // 반복자와 함께 사용하는 함수: bein(), end()
    for(iter; iter != v.end(); iter++ )
        cout << *iter << " ";
    cout << endl;
    
    // 1. 벡터 맨 앞에 삽입하기
    iter = v.begin();
    v.insert(iter, 1, 100); // iter 위치에 한개의 100을 삽입한다.
    iter = v.begin(); // insert 하고 난 뒤 iter의 위치는 꼭 초기화 해줘야 한다!!
    for(iter; iter != v.end(); iter++ )
        cout << *iter << " ";
    cout << endl;
    
    // 2. 벡터 중간에 삽입하기
    iter = v.begin();
    v.insert(iter + 2, 1, 100); // iter 위치 조종하고 삽입가능
    iter = v.begin(); // 꼭 초기화! 
    for(iter; iter != v.end(); iter++ )
        cout << *iter << " ";
    cout << endl;

    // 3. 벡터에 배열 삽입하기
    int arr[] = {500, 600, 700};
    iter = v.begin();
    v.insert(v.end(), arr, arr +3);
    iter = v.begin();
    for(iter; iter != v.end(); iter++ )
        cout << *iter << " ";

}