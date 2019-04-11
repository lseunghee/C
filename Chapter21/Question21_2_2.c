/*
Question 2
char str1[20];
char str2[20];
char str3[40];
그리고는 str1과 str2를 통해서 프로그램 사용자로부터 문자열을 입력 받되, fgets 함수호출을 통해서 입력 받는다.
이어서 str1에 저장된 문자열을 str3에 복사하고, str2에 저장된 문자열을 str3에 저장된 문자열의 뒤에 덧붙이자.
그리고 마지막으로 str3에 저장된 문자열을 출력하자. 그리고 저장된 문자열에서 \n은 소멸시켜야 한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[20];
	char str2[20];
	char str3[40];

	printf("문자열 입력 1: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0; // \n 문자의 삭제

	printf("문자열 입력 2: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	strcpy(str3, str1);
	strcat(str3, str2);
	printf("조합의 결과: %s \n", str3);
	return 0;
}