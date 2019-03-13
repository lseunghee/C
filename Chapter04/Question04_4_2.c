/*
Question 2
다음 연산의 결과를 출력하는 프로그램을 작성해보자. 단, * 연산자와 / 연산자를 사용하지 않고
구현해야 한다.
3 X 8 / 4
물론 중간과정을 생략하거나 적절히 암산하지 않고, 반드시 곱셈에 대응하는 연산과 나눗셈에 대응하는 연산을 거쳐서 해결해야 한다.

<- 곱 , -> 제
*/
#include <stdio.h>

int main(void) {
	int num = 3;
	num = num << 3; // 곱
	num = num >> 2; // 제
	printf("%d \n", num);
	return 0;
}