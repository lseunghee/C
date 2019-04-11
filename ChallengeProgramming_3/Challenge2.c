/*
달팽이 배열
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[100][100]; // 2차원 배열

	int n; // 사각형 한 변의 길이
	int num = 1; // 사각형에 채워넣을 숫자
	int i = 0, j = 0, size, cnt = 0, turn_cnt = 0;
	int direction = 1; // 방향변수 1: 우측, 2: 하단, 3: 좌측, 4: 상단

	scanf("%d", &n); // n 입력
	size = n;

	while (1) {
		arr[i][j] = num++; // 2차원 배열에 num값을 저장
		cnt++; // size만큼 넣었는지 확인하는 변수

		if (cnt == size) { // 방향 전환!
			turn_cnt++; //방향 전환 횟수를 기록
			if (turn_cnt % 2 == 1) size--; // 방향 전환 횟수가 홀수일 때 size 감수
			cnt = 0;
			direction++; // 방향 전환
			if (direction == 5) direction = 1;
		}

		if (size == 0) break; // 반복문 종료

		switch (direction) { // direction값을 참조하여 해당 방향으로 좌표 이동!
		case 1:
			j++;
			break;
		case 2:
			i++;
			break;
		case 3:
			j--;
			break;
		case 4:
			i--;
			break;
		}
	}

	// 결과 출력

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}