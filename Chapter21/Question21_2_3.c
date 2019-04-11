/*
Question 3
프로그램 사용자로부터 이름과 나이를 다음의 형식에 맞춰서 하나의 문자열로 입력 받는다.
"이정선 29"
"한수정 7"
"오선주 17"

이름은 세 글자가 아닐수도 있고 영문으로 입력될 수 있다. 단, 이름과 나이 사이에만
공백이 삽입되어야 한다. 이러한 형식으로 두 사람의 정보를 입력 받아서 이름과 나이가 각각 같은지 다른지
를 판단하여 출력하는 프로그램을 작성해보자.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int GetSpaceIdx(char str[]) {
	int len, i;
	len = strlen(str);
	for (i = 0; i < len; i++) {
		if (str[i] == ' ')
			return i;
	}
	return -1;
}
int CompName(char str1[], char str2[]) {
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);

	if (idx1 != idx2)
		return 0;
	else
		return !strncmp(str1, str2, idx1);
}
int CompAge(char str1[], char str2[]) {
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);
	int ag1, ag2;

	ag1 = atoi(&str1[idx1 + 1]); // str1[idx1+1]이 나이가 저장된 위치
	ag2 = atoi(&str2[idx2 + 1]); // str2[idx2+1]이 나이가 저장된 위치

	if (ag1 == ag2)
		return 1;
	else
		return 0;
}

int main(void) {
	char str1[20];
	char str2[20];

	printf("첫 번째 사람 정보 입력: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	printf("두 번째 사람 정보 입력: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	if(CompName(str1, str2))
		puts("이름이 동일합니다.");
	else
		puts("이름이 동일하지 않습니다.");

	if(CompAge(str1, str2))
		puts("나이가 같습니다.");
	else
		puts("나이가 같지 않습니다.");

	return 0;
}