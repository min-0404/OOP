// 벡터의 맨 앞과 맨 뒤 리턴하기
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

    // 벡터의 맨앞과 맨뒤 반환하기
    cout << v.front() << endl;
    cout << v.back() << endl;
}