#include <stdio.h>

int main(void) {
	char *str = "Simple String";

	printf("1. puts test------ \n");
	puts(str); // puts 함수는 자동으로 개행이 이뤄진다.
	puts("So Simple String");

	printf("2. fputs test------ \n");
	fputs(str, stdout); printf("\n"); // fputs 함수는 자동으로 개행이 이뤄지지 않는다.
	fputs("So Simple String", stdout); printf("\n");

	printf("3. end of main ----\n");
	return 0;
}