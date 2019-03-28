/*
Challenge 1
길이가 10인 배열을 선언하고 총 10개의 정수를 입력 받아서, 홀수와 짝수를 구분 지어 출력하는 프로그램을 작성해 보자.
일단 홀수부터 출력하고 나서 짝수를 출력하도록 하자. 단, 10개의 정수는 main함수 내에서 입력 받도록 하고,
배열 내에 존재하는 홀수만 출력하는 함수와 배열 내에 존재하는 짝수만 출력하는 함수를 각각 정의해서 이 두 함수를 호출하는 방식으로 프로그램을 완성하자.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printOdd(int *array) {
	printf("홀수 출력: ");
	for (int i = 0; i < 10; i++) {
		if ((array[i] % 2) != 0) {
			printf("%d ", array[i]);
		}
	}
}

void printEven(int *array) {
	printf("짝수 출력: ");
	for (int i = 0; i < 10; i++) {
		if ((array[i] % 2) == 0) {
			printf("%d ", array[i]);
		}
	}
}
int main(void) {
	int array[10];

	printf("총 10개의 숫자입력\n");
	for (int i = 0; i < 10; i++) {
		printf("입력: ");
		scanf("%d", &array[i]);
	}
	printOdd(array);
	printf("\n");
	printEven(array);
	printf("\n");

	return 0;

}