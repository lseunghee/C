/*
Question 2
프로그램 사용자로부터 영단어를 입력 받아서 char형 배열에 저장한다. 그 다음 배열에
저장된 영단어를 역순으로 뒤집는다. 물론 이 때에 널 문자의 위치를 변경해서는 안 된다.
뒤집고 나서는 제대로 뒤집혔는지 확인하기 위해서 출력해보자.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i;
	int cnt = 0;
	char str[10];
	char temp;
	printf("문자입력: ");
	scanf("%s", str);

	while (str[cnt] != '\0')
		cnt++;

	for (i = 0; i <= cnt / 2; i++) {
		temp = str[i];
		str[i] = str[(cnt - i) - 1];
		str[(cnt - i) - 1] = temp;
	}
	printf("결과: %s\n", str);

	return 0;
}