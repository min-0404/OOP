// 벡터 순회한는 방법 3가지
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
    cout << v.size(); // size = 당연히 5
    cout << v.capacity(); // capacity 는 1 -> 2 -> 4 -> 8, 즉 capacity = 8
    cout << endl;

    // 방법 1 : 그냥 int i 이용
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    // 또는 v.at[i] 사용해도 됨
    for(int i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";
    cout << endl;

    // 방법 2 : 멤버 형식 size_type 이용
    for(vector<int>::size_type i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    // 방법 3 : iterator 이용
    vector<int>::iterator iter;
    for(iter = v.begin(); iter != v.end(); iter++)
        cout << *iter << " ";
    cout << endl;
    
    

}