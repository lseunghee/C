/*
Question 3
���α׷� ����ڷκ��� ����ؼ� ������ �Է� �޴´�. �׸��� �� ���� ����ؼ� ���� ������. �̷��� �۾��� ���α׷� ����ڰ� 0�� �Է��� ������
��ӵǾ�� �ϸ�, 0�� �ԷµǸ� �Էµ� ��� ������ ���� ����ϰ� ���α׷��� �����Ų��.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int total = 0;
	int num = 1;

	while (num != 0) {
		printf("���� �Է�(0 to quit) : ");
		scanf("%d", &num);
		total += num;
	}
	printf("�Էµ� ������ �� ��: %d \n", total);
	return 0;
}