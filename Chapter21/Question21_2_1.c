/*
Question 1
적당한 길이의 문자열을 입력 받아서 그 안에 존재하는 숫자의 총 합을 계산해서 출력하는 프로그램을
작성해 보자. 예를 들어서 프로그램 사용자로부터 입력 받은 문자열이 "A15#43"이라 하면,
이 문자열 중 아라비아 숫자는 1, 5, 4, 3이니, 1+5+4+3의 연산결과가 출력되어야 한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str1[20];
	char str2[5];

	int i, len;
	int sum = 0;

	fputs("문자열 입력: ", stdout);
	fgets(str1, sizeof(str1), stdin);

	len = strlen(str1); // 널 문자 포함 길이 7

	for (i = 0; i < len; i++) {
		if ('1' <= str1[i] && str1[i] <= '9') { // 문자 1~9까지 선별
			sum = sum + (str1[i] - 48); // 문자열 '1'(49)과 숫자 1의 아스키 코드값의 차는 48
		}
	}
	printf("문자열 중 숫자 총 합: %d \n", sum);
	return 0;
}