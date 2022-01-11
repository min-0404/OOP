#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
using namespace std;

int main(){
    
    // pStart, pLast를 이용해 링크드리스트 형태를 구현
    Shape* pStart = NULL;
    Shape* pLast;
    pStart = new Circle(); // 처음에 원 도형을 생성한다 (업캐스팅)
    pLast = pStart;
    pLast = pLast -> add(new Rect()); // 사각형 객체 생성 (업캐스팅)
    pLast = pLast -> add(new Circle()); // 원 객체 생성   " "
    pLast = pLast -> add(new Line()); // 선 객체 생성     " "
    pLast = pLast -> add(new Rect()); // 사각형 객체 생성 " "

    //현재 연결된 모든 도형을 화면에 그린다 (링크드리스트 순회)
    Shape* p =pStart;
    while(p != NULL){
        p -> paint();
        p = p -> getNext();
    }

    //현재 연결된 모든 도형을 삭제한다 (링크드리스트 삭제)
    p = pStart;
    while(p != NULL){
        Shape* q = p -> getNext();
        delete p;
        p = q;
    }

    
}