/*
Question 1
������ ������ ���ڿ��� �Է� �޾Ƽ� �� �ȿ� �����ϴ� ������ �� ���� ����ؼ� ����ϴ� ���α׷���
�ۼ��� ����. ���� �� ���α׷� ����ڷκ��� �Է� ���� ���ڿ��� "A15#43"�̶� �ϸ�,
�� ���ڿ� �� �ƶ��� ���ڴ� 1, 5, 4, 3�̴�, 1+5+4+3�� �������� ��µǾ�� �Ѵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str1[20];
	char str2[5];

	int i, len;
	int sum = 0;

	fputs("���ڿ� �Է�: ", stdout);
	fgets(str1, sizeof(str1), stdin);

	len = strlen(str1); // �� ���� ���� ���� 7

	for (i = 0; i < len; i++) {
		if ('1' <= str1[i] && str1[i] <= '9') { // ���� 1~9���� ����
			sum = sum + (str1[i] - 48); // ���ڿ� '1'(49)�� ���� 1�� �ƽ�Ű �ڵ尪�� ���� 48
		}
	}
	printf("���ڿ� �� ���� �� ��: %d \n", sum);
	return 0;
}