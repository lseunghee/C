/*
문제 1에서 작성한 파일에 데이터를 추가하자. 추가할 데이터는 즐겨 먹는 음식의 정보와 취미이다.
입력의 형태는 다음과 같아야 한다.
#즐겨먹는 음식: 짬뽕, 탕수육
#취미: 축구
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE *fp = fopen("mystory.txt", "at");
	fputs("#즐겨먹는 음식: 짬뽕, 탕수육 \n", fp);
	fputs("#취미: 축구 \n", fp);
	fclose(fp);
	return 0;
}