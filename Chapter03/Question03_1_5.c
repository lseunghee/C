/*
Question 5
입력 받은 세 개의 정수 num1, num2, num3를 대상으로 다음 연산의 결과를 출력하는 프로그램을 작성해보자.
(num1-num2) X (num2+num3) X (num3%num1)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2, num3;
	int result;
	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2)*(num2 + num3)*(num3%num1);
	printf("%d\n", result);
	return 0;
}
