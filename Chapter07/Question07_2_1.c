/*
Question 1
프로그램 사용자로부터 총 5개의 정수를 입력 받아서, 그 수의 합을 출력하는 프로그램을 작성해보자. 단! 한가지 조건이 있다.
정수는 반드시 1이상이여야 한다. 만약에 1 미만의 수가 입력되는 경우에는, 이를 입력으로 인정하지 않고 재 입력을 요구해야 한다.
그래서 결국 1이상의 정수 5개를 모두 입력 받을 수 있도록 프로그램을 완성해야 한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int sum = 0, num = 0, i = 0;

	while (i < 5) {
		while (num <= 0) {
			printf("0보다 큰 수를 입력(%d번째): ", i+1);
			scanf("%d", &num);
		}
		sum += num;
		num = 0;
		i++;
	}
	printf("총 합: %d \n", sum);
	return 0;
}