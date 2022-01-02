// 벡터의 중간값 삭제하기
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
    vector<int>::iterator iter;
    iter = v.begin();

    // 3 삭제해보기
    for(iter; iter != v.end(); iter++)
        if(*iter == 3)
            v.erase(iter);

    iter = v.begin();
    for(iter; iter != v.end(); iter++)
        cout << *iter << " ";
    

    // 아예 벡터의 내용 다 삭제해보기(단, capacity는 그대로임)
    v.clear();
    
}