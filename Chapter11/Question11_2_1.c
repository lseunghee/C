/*
Question 1
���α׷� ����ڷκ��� �ϳ��� ���ܾ �Է� �޾Ƽ� �Է� ���� ���ܾ��� ���̸� ����Ͽ� ����ϴ� ���α׷��� �ۼ��غ���.
���� �� "Array"��� �ܾ �ԷµǸ� 5�� ��µǾ�� �Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int cnt = 0;
	char str[50];
	printf("�����Է�: ");
	scanf("%s", str);

	while (str[cnt] != '\0') {
		cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}