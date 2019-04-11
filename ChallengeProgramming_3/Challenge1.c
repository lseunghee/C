/*
Challenge 1
길이가 4x4인 int형 2차원 배열을 선언하고, 모든 요소를 아래 그림의 왼쪽에 있는 형태와
동일하게 초기화하자. 그리고 배열의 요소들을 오른쪽 방향으로 90도씩 이동시켜서 그 결과를
출력하는 프로그램을 작성해 보자. 참고로 배열이 변경되는 형태는 다음과 같다.

 1  2  3  4   13  9 5 1   16 15 14 13   4 8 12 16
 5  6  7  8   14 10 6 2   12 11 10  9   3 7 11 15
 9 10 11 12   15 11 7 3    8  7  6  5   2 6 10 14
13 14 15 16   16 12 8 4    4  3  2  1   1 5  9 13
*/

#include <stdio.h>

int main(void) {
	int array[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};

	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			printf("%2d", array[i][j]);
		printf("\n");
	}
	printf("   ▼\n");

	for (i = 0; i < 4; i++) {
		for (j = 3; j >= 0; j--)
			printf("%2d", array[j][i]);
		printf("\n");
	}
	printf("   ▼\n");

	for (i = 3; i >= 0; i--) {
		for (j = 3; j >= 0; j--)
			printf("%2d", array[i][j]);
		printf("\n");
	}
	printf("   ▼\n");

	for (i = 3; i >= 0; i--) {
		for (j = 0; j < 4; j++)
			printf("%2d", array[j][i]);
		printf("\n");
	}
	return 0;
}