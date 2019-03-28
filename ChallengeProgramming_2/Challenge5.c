/*
Challenge 5
�̹����� ���� �˰����� �ϳ� �Ұ��ϰ�, �̰��� �̿��� ���α׷��� ������ �����ϰ��� �Ѵ�.
�����̶� ���ǵ� ������ ���ؼ� ����� ���ġ�ϴ� ���� �ǹ��Ѵ�. ���� �� ���̰� 5�� �迭�� ����
4, 3, 5, 1, 2�� ����Ǿ� �ִٰ� �����غ���. �̰��� ��������(ascending order)���� �����ϸ� ������
1, 2, 3, 4, 5�� ���ġ�� ���̰�, ��������(descending order)���� �����ϸ� ������
5, 4, 3, 2, 1�� ���ġ�� ���̴�. ���Ŀ� ���� �⺻���� ������ ������ ������ �����Ƿ� ���Ŀ� ���� �������� �Ұ���
���뿡�� ������� �ϰڴ�. ���� �˰����� �� ���� �پ��ϴ�. �׷��� ���⼭�� ���� ���� ���� ����(bubble sort)�˰����� �Ұ��ϰ��� �Ѵ�.
���� �����̶�� �̸��� ���ĵǴ� ������ ��ġ ��ǰ�� �Ͼ�� ����� �����ϴٰ� �ؼ� �ٿ��� �̸��̴�.
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

	for (i = 0; i < len - 1; i++) { // �������� ����
		for (j = 0; j < (len - i) - 1; j++){
			if (ary[j] > ary[j + 1]) {
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}