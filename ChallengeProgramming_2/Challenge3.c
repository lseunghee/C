/*
Challenge 3
���̰� 10�� �迭�� �����ϰ� �� 10���� ������ �Է� �޴´�. ��, �Է� ���� ���ڰ� Ȧ���̸� �迭�� �տ������� ä��������, ¦���̸� �ڿ������� ä�������� ������
���ϱ�� ����. ���� ����ڰ� [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]�� �Է��ߴٸ�, �迭���� [1, 3, 5, 7, 9, 10, 8, 6, 4, 2]�� ������ ������ �Ǿ�� �Ѵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[10];
	int evenCount = 9, oddCount = 0, num;

	printf("�� 10���� ���� �Է�\n");
	for (int i = 0; i < 10; i++) {
		printf("�Է�: ");
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
	printf("�迭 ����� ���:");
	for (int j = 0; j < 10; j++) {
		printf("%d ", arr[j]);
	}
	printf("\n");
	return 0;
}