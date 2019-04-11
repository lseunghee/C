/*
가위 바위 보
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
		printf("바위는 1, 가위는 2, 보는 3 : ");
		scanf("%d", &user);

		srand((int)time(NULL));

		com = rand() % 3 + 1;

		if (com == 1) {
			if (user == 1) {
				printf("당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다.\n");
				draw++;
				printf("\n");
			}
			else if (user == 2) {
				printf("당신은 가위 선택, 컴퓨터는 바위 선택, 졌습니다.\n");
				printf("\n");
				break;
			}
			else {
				printf("당신은 보 선택, 컴퓨터는 바위 선택, 이겼습니다.\n");
				win++;
				printf("\n");
			}
		}
		
		if (com == 2) {
			if (user == 1) {
				printf("당신은 바위 선택, 컴퓨터는 가위 선택, 이겼습니다.\n");
				win++;
				printf("\n");
			}
			else if (user == 2) {
				printf("당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다.\n");
				draw++;
				printf("\n");
			}
			else {
				printf("당신은 보 선택, 컴퓨터는 가위 선택, 졌습니다.\n");
				printf("\n");
				break;
			}
		}

		if (com == 3) {
			if (user == 1) {
				printf("당신은 바위 선택, 컴퓨터는 보 선택, 졌습니다.\n");
				printf("\n");
				break;
			}
			else if (user == 2) {
				printf("당신은 가위 선택, 컴퓨터는 보 선택, 이겼습니다.\n");
				win++;
				printf("\n");
			}
			else {
				printf("당신은 보 선택, 컴퓨터는 보 선택, 비겼습니다.\n");
				draw++;
				printf("\n");
			}
		}
		sco++;
	}
	printf("게임의 결과: %d 전, %d 승, %d 무\n", sco, win, draw);
	printf("\n");

	return 0;
}