#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE *fp = fopen("data.txt", "wt");
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);
	return 0;
}