/*
Question 2
�Ʒ��� ����� ���̴� ���α׷��� �ۼ��غ���.
*
o *
o o *
o o o *
o o o o *
�����, �� 5�࿡ ���ļ� ����� �̷�����, ���� ������ ������ o ������ ���� �����Ѵٴ� Ư¡�� ������� while���� ��ø�� �����ϸ� �ȴ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i = 0, j = 0;

	while (i < 5) {
		while (j < i) {
			printf("o ");
			j++;
		}
		j = 0;
		printf("* \n");
		i++;
	}
	return 0;
}