/*
Question 1
프로그램 사용자로부터 알파벳 문자를 하나 입력 받아서, 입력 받은 문자가 대문자면 이를 소문자로 변환해서 출력해주고,
입력 받은 문자가 소문자면 이를 대문자로 변환해서 출력해주는 프로그램을 작성해보자.
단, 문자의 입출력에는 getchar 함수와 puchar 함수를 사용하기로 하자. 그리고 프로그램 사용자가 알파벳 이외의 문자를 입력하는
경우에는 그에 따른 오류메시지를 간단히 출력하기로 하자.
*/

#include <stdio.h>

int ConvCase(int ch) {
	int diff = 'a' - 'A'; // 모든 문자의 대소문자간 차의 크기는 같다.
	if (ch >= 'A'&&ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a'&&ch <= 'z')
		return ch - diff;
	else
		return -1;
}

int main(void) {
	int ch;
	printf("문자 입력: ");
	ch = getchar();
	ch = ConvCase(ch); // 문자 변환
	if (ch == -1) {
		puts("범위를 벗어난 입력입니다.");
		return -1;
	}
	putchar(ch); // 변환된 문자 출력
	return 0;
}