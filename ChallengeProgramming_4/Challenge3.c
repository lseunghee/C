/*
Challenge 3
복소수(Complex Number)를 나타내는 구조체를 정의하고, 복소수의 덧셈과 곱셈을 위한 함수를
각각 정의하자. 그리고 이를 기반으로 프로그램 사용자로부터 두 개의 복소수 정보를 입력 받아서
두 복소수의 덧셈과 곱셈의 결과를 출력하는 프로그램을 작성하자.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct cn {
	double real;
	double imagin;
} Cn;

int main(void) {
	Cn n1;
	printf("복소수 입력1[실수 허수]: ");
	scanf("%lf %lf", &n1.real, &n1.imagin);

	Cn n2;
	printf("복소수 입력2[실수 허수]: ");
	scanf("%lf %lf", &n2.real, &n2.imagin);

	Cn plus;
	plus.real = n1.real + n2.real;
	plus.imagin = n1.imagin + n2.imagin;

	Cn multi;
	multi.real = (n1.real*n2.real) - (n1.imagin*n2.imagin);
	multi.imagin = (n1.real*n2.imagin) + (n1.imagin*n2.real);

	printf("합의 결과]실수: %lf, 허수: %lf \n", plus.real, plus.imagin);
	printf("곱의 결과]실수: %lf, 허수: %lf \n", multi.real, multi.imagin);

	return 0;
}