/*
Question 5
�Է� ���� �� ���� ���� num1, num2, num3�� ������� ���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���.
(num1-num2) X (num2+num3) X (num3%num1)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2, num3;
	int result;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2)*(num2 + num3)*(num3%num1);
	printf("%d\n", result);
	return 0;
}