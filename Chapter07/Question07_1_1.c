/*
Question 1
���α׷� ����ڷκ��� ���� ������ �ϳ� �Է� �޾Ƽ�, �� ����ŭ "Hello world!"�� ����ϴ� ���α׷��� �ۼ��غ���.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	int i=0;

	printf("���� �Է�: ");
	scanf("%d", &num);

	while (i<num) {
		printf("Hello world! \n");
		i++;
	}
	return 0;
}