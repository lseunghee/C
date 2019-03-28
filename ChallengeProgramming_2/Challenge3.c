/*
Challenge 3
길이가 10인 배열을 선언하고 총 10개의 정수를 입력 받는다. 단, 입력 받은 숫자가 홀수이면 배열의 앞에서부터 채워나가고, 짝수이면 뒤에서부터 채워나가는 형식을
취하기로 하자. 따라서 사용자가 [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]을 입력했다면, 배열에는 [1, 3, 5, 7, 9, 10, 8, 6, 4, 2]의 순으로 저장이 되어야 한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[10];
	int evenCount = 9, oddCount = 0, num;

	printf("총 10개의 숫자 입력\n");
	for (int i = 0; i < 10; i++) {
		printf("입력: ");
		scanf("%d", &num);
		if (num % 2 == 0) {
			arr[evenCount] = num;
			evenCount--;
		}
		else {
			arr[oddCount] = num;
			oddCount++;
		}
	}
	printf("배열 요소의 출력:");
	for (int j = 0; j < 10; j++) {
		printf("%d ", arr[j]);
	}
	printf("\n");
	return 0;
}