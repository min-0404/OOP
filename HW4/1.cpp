// 겜블링 게임을 구현하라. 사람클래스, 게임클래스를 만들고 랜덤넘버 3개를 배열에 저장 후 저장된 배열의 값이 모두 같을 때
// 실행 한 사람이 이기는 프로그램을 작성하라
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player
{
private:
    string name;
public:
    Player(string name = "") { this -> name = name; }
    void setName(string name) { this -> name = name; }
    string getName() { return name; }
    void getEnterKey() // 엔터키가 입력되면 리턴된다
    {
        char buf[100];
        cin.getline(buf, 99);
    }
};

class GamblingGame
{
private:
    Player p[2];
    int num[3];
    bool matchAll();
public:
    GamblingGame();
    void run();
};
GamblingGame::GamblingGame()
{
    srand((unsigned)time(0)); // seed 값 생성
    num[3] = {}; // 배열 0으로 초기화
}
void GamblingGame::run()
{
    string str; // 임시적으로 이름 저장할 변수
    cout << "******* 갬블링 게임을 시작합니다 ******" << endl;
    cout << "첫번째 선수 이름 >>";
    cin >> str;
    cin.ignore(); // 버퍼에 남은 엔터키 제거
    p[0].setName(str);

    cout << "두번째 선수 이름 >>";
    cin >> str;
    p[1].setName(str);
    cin.ignore(); // 버퍼에 남은 엔터키 제거

    int index = 0; // p[0] 과 p[1]을 구분해줄 변수, 처음엔 0부터 시작
    while(true)
    {
        cout << p[index].getName() << ":" << "<Enter>를 눌러주세요";
        p[index].getEnterKey();
        cout << '\t' << '\t';
        for(int i = 0; i < 3; i++) // num 배열에 차례로 0, 1, 2 중 무작위 값을 저장
        {
            num[i] = rand() % 3;
            cout << num[i] << '\t';
        }
        if(matchAll()) // num 배열의 모든 숫자가 동일하다면 승리
        {
            cout << p[index].getName() << "님 승리!!" << endl;
            break;
        }
        else // num 배열의 숫자가 하나라도 다르면 상대방의 차례로 넘어감
            cout << "아쉽군요!" << endl;
        index++;
        index = index % 2; // index는 0과 1만을 반복해서 가진다.
    }
};
bool GamblingGame::matchAll()
{
    if((num[0] == num[1]) && (num[1] == num[2]) && (num[0] == num[2]))
        return true;
    else
        return false;
}

int main()
{
    GamblingGame game;
    game.run();
}