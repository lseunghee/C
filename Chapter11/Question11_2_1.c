/*
Question 1
프로그램 사용자로부터 하나의 영단어를 입력 받아서 입력 받은 영단어의 길이를 계산하여 출력하는 프로그램을 작성해보자.
예를 들어서 "Array"라는 단어가 입력되면 5가 출력되어야 한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int cnt = 0;
	char str[50];
	printf("문자입력: ");
	scanf("%s", str);

	while (str[cnt] != '\0') {
		cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}