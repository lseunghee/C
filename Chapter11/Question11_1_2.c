/*
Question 2
char형 1차원 배열을 선언과 동시에 다음 문장의 내용으로 초기화하고, 초기화 이후에는
저장된 내용을 출력하는 예제를 작성해보자.
*/

#include <stdio.h>

int main(void) {
	char arr[9] = { 'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e' };

	for (int i = 0; i < 9; i++)
		printf("%c", arr[i]);
		printf("\n");
		return 0;
}