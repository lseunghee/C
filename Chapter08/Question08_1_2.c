/*
Question 2
�� ���� ������ �Է� �޾Ƽ� �� ���� ���� ����ϴ� ���α׷��� ������ ����.
��, ������ ū ������ ���� ���� �� ����� ����ؾ� �Ѵ�. ���� �� �Էµ� �� ����
������ ������� 12�� 5��� 7�� ��µǾ�� �ϰ�, �Էµ� �� ���� ������ ������� 4�� 16�̶��
12�� ��µǾ�� �Ѵ�. ��, ��°���� ������ 0�̻��� �Ǿ�� �Ѵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2;
	int result;

	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

	if (num1 < num2)
		result = num2 - num1;
	else
		result = num1 - num2;

	printf("�������: %d \n", result);
	return 0;
}