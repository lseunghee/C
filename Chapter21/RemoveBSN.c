#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[]) {
	int len = strlen(str);
	str[len - 1] = 0; // \n이 저장된 위치에 널 문자의 아스키 코드값 0을 저장, \n은 사라짐
}

int main(void) {
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s \n", strlen(str), str);

	RemoveBSN(str);
	printf("길이: %d, 내용: %s \n", strlen(str), str);
	return 0;
}