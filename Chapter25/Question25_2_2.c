/*
Question 2
프로그램 사용자로부터 정수를 입력 받는다. -1이 입력될 때까지 계속해서 입력 받아서, 프로그램 종료직전에 입력 받은 정수
전부를 순서대로 출력하는 프로그램을 작성해보자. 그런데 이 문제의 핵심은 프로그램 사용자가 몇 개의 정수를 입력할지 모른다는데 있다.
그래서 이 문제의 해결을 위해서 힙 영역을 사용하기로 하겠다. 일단은 길이가 5인 int형 배열을 힙에 할당하자. 그리고
배열이 꽉 찰 때마다 길이를 3씩 늘리기로 하자. 이 때 앞서 소개한 realloc 함수를 이용하면 상대적으로 쉽게 배열의 길이를 늘릴 수 있다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arrlen = 5;
	int idx = 0;
	int i;
	int *arr = (int *)malloc(sizeof(int)*arrlen);

	while (1) {
		printf("정수 입력: ");
		scanf("%d", &arr[idx]);
		if (arr[idx] == -1)
			break;

		if (arrlen == idx + 1) {
			arrlen += 3;
			arr = (int *)realloc(arr, sizeof(int)*arrlen);
		}
		idx++;
	}
	for (i = 0; i < idx; i++)
		printf("%d ", arr[i]);
	free(arr);
	return 0;
}