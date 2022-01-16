// sort함수를 이용한 벡터의 정렬
// 제일 중요한 것: it 는 포인터다 !!!
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(8);
    v.push_back(1);
    v.push_back(3);
    sort(v.begin(), v.end());
    // sort(정렬 대상의 시작 "주소", 정렬 대상의 끝나는 "주소" 바로 다음주소)
    // 이렇게도 가능: sort(&v[0],&v[v.size()])
    
    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
}