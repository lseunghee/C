/*
Question 3
���� 1�� 2���� ������ ���Ͽ� ����� ���� ��ü�� ����ϴ� ���α׷��� �ۼ��غ���.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char str[100];
	FILE *fp = fopen("mystory.txt", "rt");
	
	while (fgets(str, sizeof(str), fp) != NULL)
		printf(str);
		fclose(fp);
		return 0;
}