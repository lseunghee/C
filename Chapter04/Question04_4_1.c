/*
Question 1
�Է� ���� ���� ���� ��ȣ�� �ٲ㼭 ����ϴ� ���α׷��� �ۼ��غ���. ���� �� -3�� �ԷµǸ� 3�� ��µǾ�� �ϰ�,
5�� �ԷµǸ� -5�� ��µǾ�� �Ѵ�. ��! �ݵ�� �̹� Chapter���� �Ұ��� ��Ʈ �����ڸ� �̿��ؼ� �����ؾ� �Ѵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	printf("���� �Է�: ");
	scanf("%d", &num);
	num = ~num;
	num = num + 1;
	printf("��ȣ�� �ٲ� ��� : %d\n", num);
	return 0;
}