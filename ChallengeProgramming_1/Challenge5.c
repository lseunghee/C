/*
Challenge 6
10개의 소수(Prime Number)를 출력하는 프로그램을 작성해 보자. 참고로 정수 num이 1과
num으로 밖에 나눠지지 않는다면 이는 소수에 해당한다. 따라서 3은 소수이다. 그러나 4는 소수가 아니다.
1, 2, 4로 나눠지기 때문이다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int Prime;
	int cnt = 0;

	printf("소수: ");
	for (Prime = 2; cnt < 10; Prime++) {
		for (int chk = 2; chk <= Prime; chk++) {
			if (chk == Prime) {
				printf("%d ", Prime);
				cnt++;
			}
			if (Prime%chk == 0)
				break;
		}
	}
	printf("\n");
	return 0;
}
