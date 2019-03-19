/*
Question 3
프로그램 사용자로부터 영단어를 입력 받는다. 그리고 나서 입력 받은 영단어를 구성하는 문자 중에서
아스키 코드의 값이 가장 큰 문자를 찾아서 출력하는 프로그램을 작성해보자. 예를 들어서 입력된 영단어가
'LOVE'라면 이 중에서 아스키 코드 값이 가장 큰 문자는 V이므로 V가 출력되어야 한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i;
	int cnt = 0;
	char str[50];
	char max = 0;
	printf("문자입력: ");
	scanf("%s", &str);

	while (str[cnt] != '\0')
		cnt++;
	
	for(i=0; i<cnt; i++)
		if (max < str[i])
			max = str[i];
		printf("아스키 값이 가장 큰 문자: %c\n", max);

		return 0;
}