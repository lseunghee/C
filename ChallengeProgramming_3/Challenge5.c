/*
���� ���� ��
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int user;
	int com;
	int win = 0, draw = 0, sco = 1;

	while (1) {
		printf("������ 1, ������ 2, ���� 3 : ");
		scanf("%d", &user);

		srand((int)time(NULL));

		com = rand() % 3 + 1;

		if (com == 1) {
			if (user == 1) {
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�.\n");
				draw++;
				printf("\n");
			}
			else if (user == 2) {
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�.\n");
				printf("\n");
				break;
			}
			else {
				printf("����� �� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�.\n");
				win++;
				printf("\n");
			}
		}
		
		if (com == 2) {
			if (user == 1) {
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�.\n");
				win++;
				printf("\n");
			}
			else if (user == 2) {
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�.\n");
				draw++;
				printf("\n");
			}
			else {
				printf("����� �� ����, ��ǻ�ʹ� ���� ����, �����ϴ�.\n");
				printf("\n");
				break;
			}
		}

		if (com == 3) {
			if (user == 1) {
				printf("����� ���� ����, ��ǻ�ʹ� �� ����, �����ϴ�.\n");
				printf("\n");
				break;
			}
			else if (user == 2) {
				printf("����� ���� ����, ��ǻ�ʹ� �� ����, �̰���ϴ�.\n");
				win++;
				printf("\n");
			}
			else {
				printf("����� �� ����, ��ǻ�ʹ� �� ����, �����ϴ�.\n");
				draw++;
				printf("\n");
			}
		}
		sco++;
	}
	printf("������ ���: %d ��, %d ��, %d ��\n", sco, win, draw);
	printf("\n");

	return 0;
}