/*
Question 2
���α׷� ����ڷκ��� ������ �Է� �޴´�. -1�� �Էµ� ������ ����ؼ� �Է� �޾Ƽ�, ���α׷� ���������� �Է� ���� ����
���θ� ������� ����ϴ� ���α׷��� �ۼ��غ���. �׷��� �� ������ �ٽ��� ���α׷� ����ڰ� �� ���� ������ �Է����� �𸥴ٴµ� �ִ�.
�׷��� �� ������ �ذ��� ���ؼ� �� ������ ����ϱ�� �ϰڴ�. �ϴ��� ���̰� 5�� int�� �迭�� ���� �Ҵ�����. �׸���
�迭�� �� �� ������ ���̸� 3�� �ø���� ����. �� �� �ռ� �Ұ��� realloc �Լ��� �̿��ϸ� ��������� ���� �迭�� ���̸� �ø� �� �ִ�.
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
		printf("���� �Է�: ");
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