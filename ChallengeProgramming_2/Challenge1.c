/*
Challenge 1
���̰� 10�� �迭�� �����ϰ� �� 10���� ������ �Է� �޾Ƽ�, Ȧ���� ¦���� ���� ���� ����ϴ� ���α׷��� �ۼ��� ����.
�ϴ� Ȧ������ ����ϰ� ���� ¦���� ����ϵ��� ����. ��, 10���� ������ main�Լ� ������ �Է� �޵��� �ϰ�,
�迭 ���� �����ϴ� Ȧ���� ����ϴ� �Լ��� �迭 ���� �����ϴ� ¦���� ����ϴ� �Լ��� ���� �����ؼ� �� �� �Լ��� ȣ���ϴ� ������� ���α׷��� �ϼ�����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printOdd(int *array) {
	printf("Ȧ�� ���: ");
	for (int i = 0; i < 10; i++) {
		if ((array[i] % 2) != 0) {
			printf("%d ", array[i]);
		}
	}
}

void printEven(int *array) {
	printf("¦�� ���: ");
	for (int i = 0; i < 10; i++) {
		if ((array[i] % 2) == 0) {
			printf("%d ", array[i]);
		}
	}
}
int main(void) {
	int array[10];

	printf("�� 10���� �����Է�\n");
	for (int i = 0; i < 10; i++) {
		printf("�Է�: ");
		scanf("%d", &array[i]);
	}
	printOdd(array);
	printf("\n");
	printEven(array);
	printf("\n");

	return 0;

}