/*
Challenge 2
���α׷� ����ڷκ��� 10���� ���·� ������ �ϳ� �Է� ���� ����, �̸� 2������ ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��غ���.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int dec, bin, sum = 0, i = 1, condition = 1;
	printf("10���� ���� �Է�: ");
	scanf("%d", &dec);

	while (condition) {
		bin = dec % 2;
		sum += bin * i;
		i *= 10;
		if (dec == 1) {
			break;
		}
		dec = dec / 2;
	}
	printf("%d\n", sum);

	return 0;
}