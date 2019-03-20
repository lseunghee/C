/*
Challenge 8
2의 n승을 구하는 함수를 재귀적으로 구현해 보자. 그리고 그에 따른 적절한 main함수도 구현해보자.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Square(int n);

int sum = 1;

int main(void) {
	int n;

	printf("정수입력: ");
	scanf("%d", &n);
	Square(n);

	return 0;
}

void Square(int n) {
	if (n == 0) {
		printf("결과값: %d \n", sum);
		return;
	}
	sum = sum * 2;
	Square(n-1);
}