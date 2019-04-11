/*
Challenge 6
야구 게임
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int com[3];
	int user[3];
	int sco = 1;

	srand((int)time(NULL)); // 현재 시간을 이용한 씨드 설정
	printf("Start Game\n\n");

	for (int i = 0; i < 3; i++) {
		com[i] = rand() % 10; // 0~9까지의 난수를 com배열에 넣어준다.
	}
	
	if (com[0] == com[1]) { // 각각의 배열을 비교해서 중복이 되면
		com[0] = rand() % 10; // 다른 난수를 넣어준다.
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

		printf("3개의 숫자 선택: ");
		scanf("%d %d %d", &user[0], &user[1], &user[2]);

		for (int i = 0; i < 3; i++) {
			if (com[i] == user[i]) { // com과 user의 배열을 비교해 같다면
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
		ball -= strike; // strike 값의 뺀 값을 ball에 저장

		printf("%d 번째 도전 결과: %d strike, %d ball !\n", sco, strike, ball);
		printf("\n");

		if (strike == 3)
			break;

		sco++;
	}
		printf("Game Over!\n\n");
		return 0;
}