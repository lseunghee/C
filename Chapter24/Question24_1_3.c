/*
Question 3
문제 1과 2에서 생성한 파일에 저장된 정보 전체를 출력하는 프로그램을 작성해보자.
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