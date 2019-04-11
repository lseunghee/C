/*
Challenge 3
난수 (가짜 난수)
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("난수의 범위: 0부터 99까지 \n", RAND_MAX); // 난수의 최댓값
	for (int i = 0; i < 5; i++)
		printf("난수 출력: %d \n", rand()%100); // 0부터 99이하
	return 0;
}