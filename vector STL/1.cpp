// 벡터의 선언과 초기화, 추가하는 법, 삭제하는 법
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(10); // 0으로 초기화된 공간 10개를 가진 벡터 만들어짐 !! (특징: 자동으로 동적할당임)
    cout << v.size() << endl; // size = 10
    cout << v.capacity() << endl; // capacity = 10
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " "; // 10개 모두 0임
    cout << endl;

    vector<int> v2(5, 1); // 1로 초기화된 공간 5개를 가진 벡터 만들어짐 !!
    cout << v2.size() << endl; // size = 5
    cout << v2.capacity() << endl; // capacity 도 5
    cout << endl;

    v2.push_back(10);
    cout << v2.size(); // size = 6
    cout << v2.capacity(); // capacity = 5 * 2 해서 10이 됨
    cout << endl;

    v2.pop_back();
    cout << v2.size(); // size = 5 로 줄어듬
    cout << v2.capacity(); // capacity는 그대로 10

}
