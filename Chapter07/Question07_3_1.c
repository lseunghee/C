/*
Question 1
���� UserfulDoWhile.c�� while�� ������� �� ������ ���, �����غ� �� �ִ� ������ ���´� �ΰ����̴�.

��� 1
���� num�� ���� ������ �ʱ�ȭ�ؼ� ù ��° �ݺ������� �˻����� '��'�� �ǰ� �Ѵ�.

��� 2
while���� �����ϱ� ���� ���α׷� ����ڷκ��� ���� 1ȸ �Է� �ް� �Ѵ�.

�� �ΰ��� ����� ���� �����ؼ� ���� UserfulDoWhile.c�� while�� ������� �� ������ ����.
����� ��� ����̵� do~while���� �������� �����ٴ� ���ڿ������ٴ� ������ ����̴�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int total = 0, num = 1;

	while (num != 0) {
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &num);
		total += num;
	}
	printf("�հ�: %d \n", total);
	return 0;
}