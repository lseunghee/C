/*
Question 1
세 개의 정수를 인자로 받아서 이 세 정수의 덧셈결과와 곱셈결과를 반환하는 매크로 함수를 각각 정의해보자.
*/
#include <stdio.h>
#define ADD(x, y, z) ((x)+(y)+(z))
#define MUL(x, y, z) ((x)*(y)*(z))

int main(void) {
	printf("3+4+5 = %d \n", ADD(3, 4, 5));
	printf("3*4*5 = %d \n", MUL(3, 4, 5));
	return 0;
}