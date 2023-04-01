/***************************************************************/
/*             HW#4 : 개선된 함수 기능                         */
/*  작성자 : 김태형                    날짜 : 2023년 3월 30일  */
/*                                                             */
/* 문제 정의 :  두 인수와 최댓값 100을 비교해서 리턴값을 받는다*/
/*              세 인수를 받으면 비교하는 최댓값이 달라진다    */
/*				  - - - - - - -                                */
/***************************************************************/
#include <iostream>
using namespace std;

int big(int a, int b) { // big함수 선언
	int max = a > b ? a : b; // a>b면 a를 max에 저장, 아니라면 b를 저장
	if (max > 100) // max값이 100을 초과하면 max에 100저 저장
		max = 100;
	return max; // max값 반환
}

int big(int a, int b, int c) {
	int max = a > b ? a : b; // a와 b를 비교해 큰 값을 max에 저장
	if (c > max)	// c가 max보다 크면 max를 반환한다 
		return max;
	else
		return c; // 아닐경우 c를 반환한다
}

int main() {
	int x = big(3, 5); // 3<5 이므로 x에는 5저장
	int y = big(300, 60); // 300>60 인데 100을 초과하므로 y는 100
	int z = big(30, 60, 50); // max값이 60인데 50보다 크므로 z는 50
	cout << x << ' ' << y << ' ' << z << endl;
}