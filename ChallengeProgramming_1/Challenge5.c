/*
Challenge 6
10���� �Ҽ�(Prime Number)�� ����ϴ� ���α׷��� �ۼ��� ����. ����� ���� num�� 1��
num���� �ۿ� �������� �ʴ´ٸ� �̴� �Ҽ��� �ش��Ѵ�. ���� 3�� �Ҽ��̴�. �׷��� 4�� �Ҽ��� �ƴϴ�.
1, 2, 4�� �������� �����̴�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int Prime;
	int cnt = 0;

	printf("�Ҽ�: ");
	for (Prime = 2; cnt < 10; Prime++) {
		for (int chk = 2; chk <= Prime; chk++) {
			if (chk == Prime) {
				printf("%d ", Prime);
				cnt++;
			}
			if (Prime%chk == 0)
				break;
		}
	}
	printf("\n");
	return 0;
}
