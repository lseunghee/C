/*
Question 2
���α׷� ����ڷκ��� ���ܾ �Է� �޾Ƽ� char�� �迭�� �����Ѵ�. �� ���� �迭��
����� ���ܾ �������� �����´�. ���� �� ���� �� ������ ��ġ�� �����ؼ��� �� �ȴ�.
������ ������ ����� ���������� Ȯ���ϱ� ���ؼ� ����غ���.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i;
	int cnt = 0;
	char str[10];
	char temp;
	printf("�����Է�: ");
	scanf("%s", str);

	while (str[cnt] != '\0')
		cnt++;

	for (i = 0; i <= cnt / 2; i++) {
		temp = str[i];
		str[i] = str[(cnt - i) - 1];
		str[(cnt - i) - 1] = temp;
	}
	printf("���: %s\n", str);

	return 0;
}