/*
Question 1
�� ���� ������ ���ڷ� ���޹޾Ƽ� �� �� ���� ū ���� ��ȯ�ϴ� �Լ��� ���� ���� ���� ��ȯ�ϴ� �Լ��� �����غ���.
�׸��� �� �Լ����� ȣ���ϴ� ������ main�Լ��� �ۼ��غ���.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int MaxNum(int n1, int n2, int n3) {
	if (n1 > n2)
		return (n1 > n3) ? n1 : n3;
	else
		return (n2 > n3) ? n2 : n3;
}

int MinNum(int n1, int n2, int n3) {
	if (n1 < n2)
		return (n1 < n3) ? n1 : n3;
	else
		return (n2 < n3) ? n2 : n3;
}

int main(void) {
	int num1, num2, num3;
	printf("�� ���� ���� �Է�: ");
 	scanf("%d %d %d", &num1, &num2, &num3);
	printf("���� ū ��: %d \n", MaxNum(num1, num2, num3));
	printf("���� ���� ��: %d \n", MinNum(num1, num2, num3));
	return 0;
}