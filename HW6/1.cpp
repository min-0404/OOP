#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Random
{
public:
    static void seed(){
        srand((unsigned)time(0)); // seed 값 생성
    }
    static int nextInt(int low, int high){
        return rand() % (high - low) + 1 + low; // low 와 high 사이의 랜덤 수 반환
    }
    static char nextAlphabet(){
        int alphabet = rand() % 2; // 먼저, 소문자일지 대문자일지 랜덤하게 선택
        char result; // 최종결과 저장할 변수: char 자료형으로 설정해놓아야함
        if(! alphabet) // 소문자중에 랜덤하게 선택
            result = (rand() % (90 - 65) + 1 + 65);
        else // 대문자 중에 랜덤하게 선택
            result = (rand() % (122 -97) + 1 + 97);
        return result;
    }
    static float nextDouble(){
        return (float)(rand() / (double)RAND_MAX); // 0에서 1사이의 실수를 랜덤하게 반환
    }

};

int main(){
    Random::seed();
    cout << "1에서 100까지의 랜덤한 정수 10개를 출력합니다" << endl;
    for(int i = 0; i < 10; i++)
        cout << Random::nextInt(1, 100) << " ";
    cout << endl;
    cout << "알파벳을 랜덤하게 10개를 출력합니다 " << endl;
    for(int i = 0; i < 10; i++)
        cout << (char)Random::nextAlphabet() << " ";
    cout << endl;
    cout << "랜덤한 실수 10개를 출력합니다 " << endl;
    for(int i = 0; i < 10; i++)
        cout << Random::nextDouble() << " ";
    cout << endl;
}