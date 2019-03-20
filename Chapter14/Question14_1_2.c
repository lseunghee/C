/*
Question 2
세 변수에 저장된 값을 서로 뒤바꾸는 함수를 정의해보자. 예를 들어서 함수의 이름이
Swap3라하면, 다음의 형태로 함수가 호출되어야 한다.
Swap(&num1, &num2, &num3);
그리고 함수호출의 결과로 num1에 저장된 값은 num2에, num2에 저장된 값은 num3에,
그리고 num3에 저장된 값은 num1에 저장되어야 한다.
*/

#include <stdio.h>

void Swap3(int *ptr1, int *ptr2, int *ptr3) {
	int temp = *ptr3;
	*ptr3 = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = temp;
}

int main(void) {
	int num1=10, num2=20, num3=30;
	Swap3(&num1, &num2, &num3);
	printf("%d %d %d \n", num1, num2, num3);
	return 0;
}