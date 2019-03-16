/*
Question 1
구구단을 출력하도 짝수 단(2단, 4단, 6단, 8단)만 출력되도록 하자. 또한 2단은 2x2까지, 4단은 4x4까지, 6단은 6x6까지 8단은 8x8까지만 출력되도록 프로그램을 구현해보자.
이렇게 어수선한 문제를 제시하는 이유는 continue와 break문의 사용법을 익히기 위해서다. 그러니 가급적이면 continue와 break문을 사용해서 이 문제를 해결하기 바란다.
*/
#include <stdio.h>

int main(void) {
	int i, j;
	for (i = 1; i < 10; i++) {
		if (i % 2 != 0)
			continue;

		for (j = 1; j < 10; j++) {
			if (i < j)
				break;
			printf("%d X %d = %d \n", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}