#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// atoi ���ڿ��� ������ int�� ��ȯ
// atol ���ڿ��� ������ long�� ��ȯ
// atof ���ڿ��� ������ double�� ��ȯ
int main(void) {
	char str[20];
	printf("���� �Է�: ");
	scanf("%s", str);
	printf("%d \n", atoi(str)); 

	printf("�Ǽ� �Է�: ");
	scanf("%s", str);
	printf("%g \n", atof(str));
	return 0;
}