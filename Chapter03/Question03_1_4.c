/*
Question 4
�Է� ���� �� ������ �������� �� ��� �Ǵ� ��� �������� ����ϴ� ���α׷��� �ۼ��غ���.
���� �� 7�� 2�� �ԷµǸ� ������ 3, �������� 1�� ��µǾ�� �Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);
	printf("��: %d, ������: %d \n", num1 / num2, num1%num2);
	return 0;
}