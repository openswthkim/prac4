/***************************************************************/
/*             HW#4 : 개선된 함수 기능                         */
/*  작성자 : 김태형                    날짜 : 2023년 3월 30일  */
/*                                                             */
/* 문제 정의 : 템플릿을 이용하여 배열 원소의 순서를 뒤집는     */
/*				reverseArray 함수 구현                         */
/*                - - - - - - -                                */
/***************************************************************/
#include <iostream>
using namespace std;

template <typename T>
void reverseArray(T*arr, int size) { // 템플릿을 이용하여 배열과 배열의 크기를 받음
	for (int i = 0; i < size / 2; i++) { // 배열의 크기를 반으로 나눈 만큼 반복문을 돌음
		T temp = arr[i]; // 배열의 현재 값을 변수 temp에 저장
		arr[i] = arr[size - 1 - i]; // 배열의 끝 위치의 값을 현재 값에 저장
		arr[size - 1 - i] = temp; // 변수 temp의 값을 배열 끝 위치에 저장
	}
}

int main() {
	int x[] = { 1,10,100,5,4 }; // int형 배열을 선언
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) // 배열	x의 크기만큼 반복
		cout << x[i] << ' '; // 배열 x의 요소 출력
	cout << endl;
}