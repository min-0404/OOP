#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom
{
public:
    EvenRandom();
    int next(); // 랜덤 짝수 리턴
    int nextInRange(int low, int high); // low와 high 사이의 랜덤 짝수 리턴
};

EvenRandom::EvenRandom()
{
    srand((unsigned)time(0));
}
int EvenRandom::next()
{
    int result = rand() % RAND_MAX;
    if(!(result % 2))
        return result;
    else next();
}
int EvenRandom::nextInRange(int low, int high)
{
    int result = rand() % (high - low) + 1 + low;
    if(!(result % 2))
        return result;
    else nextInRange(low, high);
}

int main()
{
    EvenRandom r;
    cout << "--0에서 " << RAND_MAX << "까지의 랜덤 짝수 정수 10개--" << endl;
    for(int i = 0; i < 10; i++){
        int n = r.next();
        cout << n << ' ';
    }
    cout << endl << endl << "--2에서" << "10까지의 랜덤 짝수 정수 10개--" << endl;
    for(int i = 0; i < 10; i++){
        int n = r.nextInRange(2,10);
        cout << n << ' ';
    }
    cout << endl; 
}