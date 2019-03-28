/*
Challenge 5
이번에는 정렬 알고리즘을 하나 소개하고, 이것을 이용한 프로그래밍 문제를 제시하고자 한다.
정렬이란 정의된 순서에 의해서 대상을 재배치하는 것을 의미한다. 예를 들어서 길이가 5인 배열에 정수
4, 3, 5, 1, 2가 저장되어 있다고 가정해보자. 이것을 오름차순(ascending order)으로 정렬하면 순서가
1, 2, 3, 4, 5로 재배치될 것이고, 내림차순(descending order)으로 정렬하면 순서가
5, 4, 3, 2, 1로 재배치될 것이다. 정렬에 대한 기본적인 개념은 누구나 가지고 있으므로 정렬에 대한 개념적인 소개가
이쯤에서 끝내기로 하겠다. 정렬 알고리즘은 그 수가 다양하다. 그런데 여기서는 가장 쉬운 버블 정렬(bubble sort)알고리즘을 소개하고자 한다.
버블 정렬이라는 이름은 정렬되는 과정이 마치 거품이 일어나는 모습과 유사하다고 해서 붙여진 이름이다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void BubbleSort(int ary[], int len);

int main(void) {
	int arr[4] = { 3,2,4,1 };
	int i;

	BubbleSort(arr, sizeof(arr) / sizeof(int));
	for (i = 0; i < 4; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}

void BubbleSort(int ary[], int len) {
	int i, j;
	int temp;

	for (i = 0; i < len - 1; i++) { // 오름차순 정렬
		for (j = 0; j < (len - i) - 1; j++){
			if (ary[j] > ary[j + 1]) {
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}