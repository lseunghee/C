#include <stdio.h>

#define NAME "홍길동"
#define AGE 24
#define PRINT_ADDR puts("주소: 서울시 강남구\n");

int main(void) {
	printf("이름: %s \n", NAME);
	printf("나이: %d \n", AGE);
	PRINT_ADDR;
	return 0;
}