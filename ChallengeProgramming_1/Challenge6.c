/*
Challenge 6
프로그램 사용자로부터 초(second)를 입력 받은 후에, 이를[시, 분, 초]의 형태로 출력하는 프로그램을 작성해 보자.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int hour;
	int min;
	int sec1;
	int sec2;

	printf("초(second)를 입력하세요: ");
	scanf("%d", &sec1);

	hour = sec1 / 3600;
	min = (sec1 % 3600) / 60;
	sec2 = (sec1 % 3600) % 60;

	printf("hour: %d, minute: %d, second: %d \n", hour, min, sec2);
	return 0;
}