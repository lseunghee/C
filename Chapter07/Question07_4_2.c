/*
Question 2
���� ������ ���(factorial)�� ����ϴ� ���α׷��� �ۼ��غ���.
n! = 1x2x3x ..... x n
���α׷� ����ڷκ��� n�� �ش��ϴ� ������ �Է� �޴´�. �׷��� n�� ��� n!�� ����ؼ� ����� �̷����� �Ѵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, i;
	int result = 1; // ���丮���� ����� ����

	printf("���� �Է�: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
		result = result * i;

	printf("%d! = %d \n", num, result);
	return 0;
}