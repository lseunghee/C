/*
Challenge 8
2�� n���� ���ϴ� �Լ��� ��������� ������ ����. �׸��� �׿� ���� ������ main�Լ��� �����غ���.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Square(int n);

int sum = 1;

int main(void) {
	int n;

	printf("�����Է�: ");
	scanf("%d", &n);
	Square(n);

	return 0;
}

void Square(int n) {
	if (n == 0) {
		printf("�����: %d \n", sum);
		return;
	}
	sum = sum * 2;
	Square(n-1);
}