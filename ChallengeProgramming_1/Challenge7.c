/*
Challenge 7
프로그램 사용자로부터 숫자 n을 입력 받는다. 그리고 나서 다음 공식이 성립하는 k의 최댓값을 계산해서
출력하는 프로그램을 작성해 보자.
2^k<=n
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1;
	int result = 1;
	int n;
	printf("숫자를 입력하세요: ");
	scanf("%d", &num1);

	for (int i = 1; result < num1; i++) {
		if (result <= num1) {
			result = result * 2;
			n = i;
			continue;
		}
	}
	printf("공식을 만족하는 k의 최댓값은 %d", n);
	return 0;
}
