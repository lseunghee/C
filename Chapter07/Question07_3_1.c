/*
Question 1
예제 UserfulDoWhile.c를 while문 기반으로 재 구현할 경우, 생각해볼 수 있는 구현의 형태는 두가지이다.

방법 1
변수 num의 값을 적절히 초기화해서 첫 번째 반복조건의 검사결과가 '참'이 되게 한다.

방법 2
while문에 진입하기 전에 프로그램 사용자로부터 값을 1회 입력 받게 한다.

이 두가지 방법을 각각 적용해서 예제 UserfulDoWhile.c를 while문 기반으로 재 구현해 보자.
참고로 어떠한 방법이든 do~while문을 적용했을 때보다는 부자연스럽다는 느낌이 들것이다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int total = 0, num = 1;

	while (num != 0) {
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total += num;
	}
	printf("합계: %d \n", total);
	return 0;
}