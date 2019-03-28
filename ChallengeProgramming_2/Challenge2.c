/*
Challenge 2
프로그램 사용자로부터 10진수 형태로 정수를 하나 입력 받은 다음, 이를 2진수로 변환해서 출력하는 프로그램을 작성해보자.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int dec, bin, sum = 0, i = 1, condition = 1;
	printf("10진수 정수 입력: ");
	scanf("%d", &dec);

	while (condition) {
		bin = dec % 2;
		sum += bin * i;
		i *= 10;
		if (dec == 1) {
			break;
		}
		dec = dec / 2;
	}
	printf("%d\n", sum);

	return 0;
}