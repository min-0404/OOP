// 퀴즈: 이름 5개를 입력받아서 벡터에 저장하고, 사전 상 가장 마지막에 나오는 이름을 구하시오
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<string> v;
    string name;
    cout << "이름을 5개 입력하시오";
    for(int i = 0; i < 5; i++){
        getline(cin, name, '\n');
        v.push_back(name);
    }
    int last_name = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[last_name] < v[i])
            last_name = i;
    }
    cout << "사전에서 가장 뒤에 나오는 이름은" << v[last_name] << endl; 
}