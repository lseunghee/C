/*
Challenge 3
�� ���� ������ �Է� �޾Ƽ� �ִ� ������� ���ϴ� ���α׷��� �ۼ��� ����.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2;
	int x;
	printf("�ΰ��� ������ �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);

	for (int i = 1; i < num1 + num2; i++) {
		if (i < num1 && i < num2) {
			if (num1 % i == 0 && num2 % i == 0) {
				x = i;
				continue;
			}
		}
	}
	printf("�� �������� �ִ� ������� %d �̴� \n", x);
	return 0;
}