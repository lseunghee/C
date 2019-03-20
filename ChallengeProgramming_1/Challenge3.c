/*
Challenge 3
두 개의 정수를 입력 받아서 최대 공약수를 구하는 프로그램을 작성해 보자.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2;
	int x;
	printf("두개의 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);

	for (int i = 1; i < num1 + num2; i++) {
		if (i < num1 && i < num2) {
			if (num1 % i == 0 && num2 % i == 0) {
				x = i;
				continue;
			}
		}
	}
	printf("이 정수들의 최대 공약수는 %d 이다 \n", x);
	return 0;
}