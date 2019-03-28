/*
Question 3
성적관리 프로그램을 작성하자. 과목은 국어, 영어, 수학, 국사 이렇게 네 과목이고 학생은 철희, 철수, 영희, 영수 이렇게 네 사람이다.
프로그램 사용자로부터 이 네 사람의 네 과목 점수를 입력 받는다. 그리고 미리 선언해 놓은 배열에 다음의 형태로 그 값을 저장해야 한다.
저장이 끝났다면, 개인별 총점과 과목별 총점을 계산해서 배열의 위치에 저장해야 한다. 그리고 마지막에는 저장된 값의 검증을 위한 출력을 보여야 한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int record[5][5]; // 이 배열은 전역으로 선언되었으므로 자동 0으로 초기화, 학생들의 성적저장을 위한 배열

//학생별 성적의 입력
void WriteRecord(void) {
	int sum; // 학생별 성적 합계
	int i, j;
	for (i = 0; i < 4; i++) {
		sum = 0;
		printf("%d번째 학생의 성적 입력 \n", i + 1);
		for (j = 0; j < 4; j++) {
			printf("과목 %d: ", j + 1);
			scanf("%d", &record[i][j]);
			sum += record[i][j];
		}
		record[i][4] = sum;
	}
}

//과목별 성적의 합계 입력
void WriteSumRecord(void) {
	int sum = 0; //과목별 성적 합계
	int i, j;

	for (i = 0; i < 4; i++) {
		sum = 0;
		for (j = 0; j < 4; j++)
			sum += record[j][i];
		record[4][1] = sum;
		record[4][4] += sum;
	}
}

//배열에 저장된 값 전체 출력
void ShowAllRecord(void) {
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%3d ", record[i][j]);
		printf("\n");
	}
}
int main(void) {
	WriteRecord();
	WriteSumRecord();
	ShowAllRecord();
	return 0;
}