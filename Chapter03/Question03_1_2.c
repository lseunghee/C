/*
Qusetion 2
���α׷� ����ڷκ��� �� ���� ���� num1, num2, num3�� ������� �Է� ���� �Ŀ�, ���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���.
num1 x num2 + num3
��, �Է� ���� �� ���� ������ 2, 4, 6 �̶�� ������ ���·� ����� �ؾ� �Ѵ�.
2 x 4 + 6 = 14
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2, num3;
	int result;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = num1 * num2 + num3;
	printf("%d x %d + %d = %d\n", num1, num2, num3, result);
	return 0;
}