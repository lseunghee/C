/*
Question 3
while���� ��ø���� ���� TwoToNice.c�� do~while���� ��ø������� �� ������ ����.
do~while���� ��ø�� ���ؼ��� ������ ����� ��������, while���� ��ø�� �����Ͽ�����, ����� ������ �����ϴ�.
*/
#include <stdio.h>

int main(void) {
	int cur = 2;
	int is = 0;

	do {
		is = 1;
		do {
			printf("%d X %d = %d \n", cur, is, cur*is);
			is++;
		} while (is < 10);
		cur++;
		printf("\n");
	} while(cur < 10);
	return 0;
}