/*
Challenge 3
���� (��¥ ����)
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("������ ����: 0���� 99���� \n", RAND_MAX); // ������ �ִ�
	for (int i = 0; i < 5; i++)
		printf("���� ���: %d \n", rand()%100); // 0���� 99����
	return 0;
}