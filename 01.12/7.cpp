// 퀴즈 : printVector 함수와 getAverage 함수를 구현하시오 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int>& v){
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}
float getAverage(vector<int>& v){
    float sum = 0;
    for(int i = 0; i < v.size(); i++)
        sum += v[i];
    return  sum / 5;
}


int main(){
    vector<int> v;
    cout << "정수 5개 입력하시오";
    for(int i = 0; i < 5; i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    printVector(v);
    cout << "평균 = " << getAverage(v) << endl;
}