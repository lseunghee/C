/*
Question 2
(배열A)
1 2 3 4
5 6 7 8
 
 ↓

(배열B)
1 5
2 6
3 7
4 8

위 그림의 형태대로 배열A와 배열B를 선언하자. 그리고 배열 A는 선언과 동시에 그림에서 명시하는 대로 초기화를 진행하자!
그리고 배열 B도 위 그림에서 보이는 대로 초기화를 진행하되, 반드시 배열 A에 저장된 값을 이용해서
초기화를 진행해야 한다.
*/

#include <stdio.h>

int main(void) {
	int arrA[2][4] = { { 1,2,3,4 }, { 5,6,7,8 } };
	int arrB[4][2];
	int i, j;

	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			arrB[j][i] = arrA[i][j];

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++)
			printf("%2d", arrB[i][j]);
		printf("\n");
	}
	return 0;
}