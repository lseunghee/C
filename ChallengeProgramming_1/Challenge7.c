/*
Challenge 7
���α׷� ����ڷκ��� ���� n�� �Է� �޴´�. �׸��� ���� ���� ������ �����ϴ� k�� �ִ��� ����ؼ�
����ϴ� ���α׷��� �ۼ��� ����.
2^k<=n
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1;
	int result = 1;
	int n;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &num1);

	for (int i = 1; result < num1; i++) {
		if (result <= num1) {
			result = result * 2;
			n = i;
			continue;
		}
	}
	printf("������ �����ϴ� k�� �ִ��� %d", n);
	return 0;
}
