/*
������ �迭
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[100][100]; // 2���� �迭

	int n; // �簢�� �� ���� ����
	int num = 1; // �簢���� ä������ ����
	int i = 0, j = 0, size, cnt = 0, turn_cnt = 0;
	int direction = 1; // ���⺯�� 1: ����, 2: �ϴ�, 3: ����, 4: ���

	scanf("%d", &n); // n �Է�
	size = n;

	while (1) {
		arr[i][j] = num++; // 2���� �迭�� num���� ����
		cnt++; // size��ŭ �־����� Ȯ���ϴ� ����

		if (cnt == size) { // ���� ��ȯ!
			turn_cnt++; //���� ��ȯ Ƚ���� ���
			if (turn_cnt % 2 == 1) size--; // ���� ��ȯ Ƚ���� Ȧ���� �� size ����
			cnt = 0;
			direction++; // ���� ��ȯ
			if (direction == 5) direction = 1;
		}

		if (size == 0) break; // �ݺ��� ����

		switch (direction) { // direction���� �����Ͽ� �ش� �������� ��ǥ �̵�!
		case 1:
			j++;
			break;
		case 2:
			i++;
			break;
		case 3:
			j--;
			break;
		case 4:
			i--;
			break;
		}
	}

	// ��� ���

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}