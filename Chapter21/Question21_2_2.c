/*
Question 2
char str1[20];
char str2[20];
char str3[40];
�׸���� str1�� str2�� ���ؼ� ���α׷� ����ڷκ��� ���ڿ��� �Է� �޵�, fgets �Լ�ȣ���� ���ؼ� �Է� �޴´�.
�̾ str1�� ����� ���ڿ��� str3�� �����ϰ�, str2�� ����� ���ڿ��� str3�� ����� ���ڿ��� �ڿ� ��������.
�׸��� ���������� str3�� ����� ���ڿ��� �������. �׸��� ����� ���ڿ����� \n�� �Ҹ���Ѿ� �Ѵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[20];
	char str2[20];
	char str3[40];

	printf("���ڿ� �Է� 1: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0; // \n ������ ����

	printf("���ڿ� �Է� 2: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	strcpy(str3, str1);
	strcat(str3, str2);
	printf("������ ���: %s \n", str3);
	return 0;
}