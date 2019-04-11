/*
Challenge 1
���̰� 4x4�� int�� 2���� �迭�� �����ϰ�, ��� ��Ҹ� �Ʒ� �׸��� ���ʿ� �ִ� ���¿�
�����ϰ� �ʱ�ȭ����. �׸��� �迭�� ��ҵ��� ������ �������� 90���� �̵����Ѽ� �� �����
����ϴ� ���α׷��� �ۼ��� ����. ������ �迭�� ����Ǵ� ���´� ������ ����.

 1  2  3  4   13  9 5 1   16 15 14 13   4 8 12 16
 5  6  7  8   14 10 6 2   12 11 10  9   3 7 11 15
 9 10 11 12   15 11 7 3    8  7  6  5   2 6 10 14
13 14 15 16   16 12 8 4    4  3  2  1   1 5  9 13
*/

#include <stdio.h>

int main(void) {
	int array[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};

	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			printf("%2d", array[i][j]);
		printf("\n");
	}
	printf("   ��\n");

	for (i = 0; i < 4; i++) {
		for (j = 3; j >= 0; j--)
			printf("%2d", array[j][i]);
		printf("\n");
	}
	printf("   ��\n");

	for (i = 3; i >= 0; i--) {
		for (j = 3; j >= 0; j--)
			printf("%2d", array[i][j]);
		printf("\n");
	}
	printf("   ��\n");

	for (i = 3; i >= 0; i--) {
		for (j = 0; j < 4; j++)
			printf("%2d", array[j][i]);
		printf("\n");
	}
	return 0;
}