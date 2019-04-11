#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[20];
	char str2[20];
	printf("문자열 입력 1: ");
	scanf("%s", str1);
	printf("문자열 입력 2: ");
	scanf("%s", str2);
	
	if (!strcmp(str1, str2)) { // 두 값이 동일하면 거짓(0) 반환, 하지만 ! 연산을 해서 참(1) 반환
		puts("두 문자열은 완벽히 동일합니다.");
	}
	else {
		puts("두 문자열은 동일하지 않습니다.");

		if (!strncmp(str1, str2, 3))
			puts("그러나 앞 세 글자는 동일합니다.");
	}
	return 0;
}