/*
Question 2
���α׷� ����ڷκ��� ���� ������ �ϳ� �Է� ���� ����, �� ����ŭ 3�� ����� ����ϴ� ���α׷��� �ۼ��غ���. ���� �� 5�� �Է¹޾Ҵٸ�,
3 6 9 12 15�� ����ؾ� �Ѵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num=0, cnt=0;
	printf("����� ����: ");
	scanf("%d", &num);

	while (cnt++< num) 
		printf("%d ", 3 * cnt);
	return 0;
}