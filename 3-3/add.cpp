/***************************************************************/
/*             HW#4 : 개선된 함수 기능                         */
/*  작성자 : 김태형                    날짜 : 2023년 3월 30일  */
/*                                                             */
/* 문제 정의 :주어진 배열 요소들의 합을 구하는 제네릭 함수 구현*/
/*                - - - - - - -                                */
/***************************************************************/
#include <iostream>
using namespace std;

template <typename T>
T add(T arr[], int size) { // 템플릿을 이용하여 배열과 배열의 크기를 받음
    T sum = 0; // 변수 sum 초기화
    for (int i = 0; i < size; i++) { // i부터 size까지 반복하여
        sum += arr[i]; // sum에 더해준다
    }
    return sum; // sum값 반환
}

int main() {
    int x[] = { 1,2,3,4,5 }; // int형 배열 선언
    double d[] = { 1.2, 2.3, 3.4, 4.5, 5.6, 6.7 }; // double형 배열 선언

    cout << "sum of x[] = " << add(x, 5) << endl;
    cout << "sum of d[] = " << add(d, 6) << endl;
}
