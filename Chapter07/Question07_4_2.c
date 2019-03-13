/*
Question 2
다음 수식인 계승(factorial)을 계산하는 프로그램을 작성해보자.
n! = 1x2x3x ..... x n
프로그램 사용자로부터 n에 해당하는 정수를 입력 받는다. 그러면 n의 계승 n!를 계산해서 출력이 이뤄져야 한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, i;
	int result = 1; // 팩토리얼의 계산결과 저장

	printf("정수 입력: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
		result = result * i;

	printf("%d! = %d \n", num, result);
	return 0;
}