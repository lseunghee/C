/*
Challenge 4
ȸ��(Palindrome)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char str[50];
	int i, len;
	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", str);
	for (i = 0; str[i] != 0; i++) {
		len = i;
	}
	for (i = 0; i < len; i++) {
		if (str[i] != str[len - i])
			break;
	}
	if (i > len / 2)
		printf("ȸ���Դϴ�.\n");
	else
		printf("ȸ���� �ƴմϴ�.");
	return 0;
}