/*
Challenge 4
����
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand((int)time(NULL));

	printf("�ֻ��� 1�� ���: %d \n", rand()%6+1);
	printf("�ֻ��� 2�� ���: %d \n", rand()%6+1);
	return 0;
}