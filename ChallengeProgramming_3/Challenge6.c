/*
Challenge 6
�߱� ����
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int com[3];
	int user[3];
	int sco = 1;

	srand((int)time(NULL)); // ���� �ð��� �̿��� ���� ����
	printf("Start Game\n\n");

	for (int i = 0; i < 3; i++) {
		com[i] = rand() % 10; // 0~9������ ������ com�迭�� �־��ش�.
	}
	
	if (com[0] == com[1]) { // ������ �迭�� ���ؼ� �ߺ��� �Ǹ�
		com[0] = rand() % 10; // �ٸ� ������ �־��ش�.
	}
	if (com[0] == com[2]) {
		com[0] = rand() % 10;
	}
	if (com[1] == com[2]) {
		com[1] = rand() % 10;
	}

	while (1) {
		int strike = 0;
		int ball = 0;

		printf("3���� ���� ����: ");
		scanf("%d %d %d", &user[0], &user[1], &user[2]);

		for (int i = 0; i < 3; i++) {
			if (com[i] == user[i]) { // com�� user�� �迭�� ���� ���ٸ�
				strike++;
			}
		}
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (com[i] == user[j]) {
					ball++;
				}
			}
		}
		ball -= strike; // strike ���� �� ���� ball�� ����

		printf("%d ��° ���� ���: %d strike, %d ball !\n", sco, strike, ball);
		printf("\n");

		if (strike == 3)
			break;

		sco++;
	}
		printf("Game Over!\n\n");
		return 0;
}