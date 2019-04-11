#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// atoi 문자열의 내용을 int형 변환
// atol 문자열의 내용을 long형 변환
// atof 문자열의 내용을 double형 변환
int main(void) {
	char str[20];
	printf("정수 입력: ");
	scanf("%s", str);
	printf("%d \n", atoi(str)); 

	printf("실수 입력: ");
	scanf("%s", str);
	printf("%g \n", atof(str));
	return 0;
}