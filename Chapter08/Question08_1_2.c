/*
Question 2
두 개의 정수를 입력 받아서 두 수의 차를 출력하는 프로그램을 구현해 보자.
단, 무조건 큰 수에서 작은 수를 뺀 결과를 출력해야 한다. 예를 들어서 입력된 두 수가
순서에 상관없이 12와 5라면 7이 출력되어야 하고, 입력된 두 수가 순서에 상관없이 4와 16이라면
12가 출력되어야 한다. 즉, 출력결과는 무조건 0이상이 되어야 한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2;
	int result;

	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	if (num1 < num2)
		result = num2 - num1;
	else
		result = num1 - num2;

	printf("뺄셈결과: %d \n", result);
	return 0;
}