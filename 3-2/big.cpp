/***************************************************************/
/*             HW#4 : ������ �Լ� ���                         */
/*  �ۼ��� : ������                    ��¥ : 2023�� 3�� 30��  */
/*                                                             */
/* ���� ���� :  �� �μ��� �ִ� 100�� ���ؼ� ���ϰ��� �޴´�*/
/*              �� �μ��� ������ ���ϴ� �ִ��� �޶�����    */
/*				  - - - - - - -                                */
/***************************************************************/
#include <iostream>
using namespace std;

int big(int a, int b) { // big�Լ� ����
	int max = a > b ? a : b; // a>b�� a�� max�� ����, �ƴ϶�� b�� ����
	if (max > 100) // max���� 100�� �ʰ��ϸ� max�� 100�� ����
		max = 100;
	return max; // max�� ��ȯ
}

int big(int a, int b, int c) {
	int max = a > b ? a : b; // a�� b�� ���� ū ���� max�� ����
	if (c > max)	// c�� max���� ũ�� max�� ��ȯ�Ѵ� 
		return max;
	else
		return c; // �ƴҰ�� c�� ��ȯ�Ѵ�
}

int main() {
	int x = big(3, 5); // 3<5 �̹Ƿ� x���� 5����
	int y = big(300, 60); // 300>60 �ε� 100�� �ʰ��ϹǷ� y�� 100
	int z = big(30, 60, 50); // max���� 60�ε� 50���� ũ�Ƿ� z�� 50
	cout << x << ' ' << y << ' ' << z << endl;
}