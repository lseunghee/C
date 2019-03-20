/*
Challenge 1
10진수 정수를 입력 받아서 16진수로 출력하는 프로그램을 작성해보자. 이는 서식문자의
활용에 대한 문제이므로 쉽게 해결할 수 있을 것이다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	printf("10진수 정수입력: ");
	scanf("%d", &num);
	printf("16진수 변환 값: %x\n", num);

	return 0;
}