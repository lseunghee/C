/*
Challenge 6
���α׷� ����ڷκ��� ��(second)�� �Է� ���� �Ŀ�, �̸�[��, ��, ��]�� ���·� ����ϴ� ���α׷��� �ۼ��� ����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int hour;
	int min;
	int sec1;
	int sec2;

	printf("��(second)�� �Է��ϼ���: ");
	scanf("%d", &sec1);

	hour = sec1 / 3600;
	min = (sec1 % 3600) / 60;
	sec2 = (sec1 % 3600) % 60;

	printf("hour: %d, minute: %d, second: %d \n", hour, min, sec2);
	return 0;
}