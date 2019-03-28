/*
Challenge 4
회문(Palindrome)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char str[50];
	int i, len;
	printf("문자열을 입력하세요: ");
	scanf("%s", str);
	for (i = 0; str[i] != 0; i++) {
		len = i;
	}
	for (i = 0; i < len; i++) {
		if (str[i] != str[len - i])
			break;
	}
	if (i > len / 2)
		printf("회문입니다.\n");
	else
		printf("회문이 아닙니다.");
	return 0;
}