/*
Question 1
���α׷� ����ڷκ��� ���ĺ� ���ڸ� �ϳ� �Է� �޾Ƽ�, �Է� ���� ���ڰ� �빮�ڸ� �̸� �ҹ��ڷ� ��ȯ�ؼ� ������ְ�,
�Է� ���� ���ڰ� �ҹ��ڸ� �̸� �빮�ڷ� ��ȯ�ؼ� ������ִ� ���α׷��� �ۼ��غ���.
��, ������ ����¿��� getchar �Լ��� puchar �Լ��� ����ϱ�� ����. �׸��� ���α׷� ����ڰ� ���ĺ� �̿��� ���ڸ� �Է��ϴ�
��쿡�� �׿� ���� �����޽����� ������ ����ϱ�� ����.
*/

#include <stdio.h>

int ConvCase(int ch) {
	int diff = 'a' - 'A'; // ��� ������ ��ҹ��ڰ� ���� ũ��� ����.
	if (ch >= 'A'&&ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a'&&ch <= 'z')
		return ch - diff;
	else
		return -1;
}

int main(void) {
	int ch;
	printf("���� �Է�: ");
	ch = getchar();
	ch = ConvCase(ch); // ���� ��ȯ
	if (ch == -1) {
		puts("������ ��� �Է��Դϴ�.");
		return -1;
	}
	putchar(ch); // ��ȯ�� ���� ���
	return 0;
}