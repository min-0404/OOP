// 반복자 사용해보기 : iterator 사용해서 벡터의 모든 원소에 2 곱해보자
// 제일 중요한 것: it 는 포인터다 !!!
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    vector<int>::iterator it;
    
    for(it = v.begin(); it != v.end(); it++){
        *it *= 2;
    }
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    
}