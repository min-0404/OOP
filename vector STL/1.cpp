// 벡터의 선언과 초기화, 추가하는 법, 삭제하는 법
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5, 1); // 5개의 1을 가진 벡터가 만들어짐(특징: 자동으로 동적 할당됨)
    cout << v.size(); // size = 5
    cout << v.capacity(); // capacity 도 5
    cout << endl;

    v.push_back(10);
    cout << v.size(); // size = 6
    cout << v.capacity(); // capacity = 5 * 2 해서 10이 됨
    cout << endl;

    v.pop_back();
    cout << v.size(); // size = 5 로 줄어듬
    cout << v.capacity(); // capacity는 그대로 10

}
