/*
Question 4
���� ���� 2�� if~else���� �̿��ؼ� �ذ��Ͽ��°�? ��� ���·� �ذ��߰� ���� ���� �����ڸ� �̿��ϴ� ���·� ���α׷��� ������ ����.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2;
	int result;

	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);
	
	result = (num1 < num2) ? num2 - num1 : num1 - num2;
	printf("�������: %d \n", result);
	return 0;
}