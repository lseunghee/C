/*
Question 1
���α׷� ����ڷκ��� ���ڿ��� �Է� �޾Ƽ� ���ڿ��� �ܾ ������ ����ϴ� ���α׷��� �ۼ��غ���.
���� �� "I am a boy"�� �ԷµǸ�, ������ ����� ������ �Ѵ�.
"boy a am I"
��! ���ڿ��� �Է¿� �ռ� ���α׷� ����ڰ� �Է��� ���ڿ��� �ִ���� ������ ���� �Է� �ޱ�� ����.
�׸��� �� ���̸�ŭ �޸� ������ �������� �Ҵ��ؼ� ���ڿ��� �Է� �ޱ�� ����.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	int maxlen, len, i;
	char *str;
	printf("���ڿ��� �ִ� ���� �Է�: ");
	scanf("%d", &maxlen);
	getchar();
	str = (char *)malloc(sizeof(char)*(maxlen + 1));

	printf("���ڿ� �Է�: ");
	fgets(str, maxlen + 1, stdin);
	str[strlen(str) - 1] = 0;
	len = strlen(str);
	for (i = len; i > 0; i--) {
		if (str[i] == ' ') {
			printf("%s ", &str[i + 1]);
			str[i] = 0;
		}
	}
	printf("%s", &str[0]);
	free(str);
	return 0;
}