#include <stdio.h>

#define NAME "ȫ�浿"
#define AGE 24
#define PRINT_ADDR puts("�ּ�: ����� ������\n");

int main(void) {
	printf("�̸�: %s \n", NAME);
	printf("����: %d \n", AGE);
	PRINT_ADDR;
	return 0;
}