/*
Question 1
���α׷� ����ڷκ��� �� ���� ������ �Է¹޾Ƽ�, �� ������ �����Ͽ� �� ���̿� �����ϴ� �������� ����
����ؼ� ����ϴ� ���α׷��� �ۼ��� ����. ���� �� 3�� 5�� �ԷµǸ�, 3+4+5�� ����� ��µǾ�� �Ѵ�.
�׸��� ������ ���� ������ �ϱ� ���ؼ�, ù ��° �ԷµǴ� �������� �ι�° �ԷµǴ� ������ �� Ŀ�� �Ѵٴ� ������
�ɱ�� �ϰڴ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int start, end;
	int result; // start~end�� ��

	printf("���۰� �� �Է�: ");
	scanf("%d %d", &start, &end);

	for (result = 0; start <= end; start++)
		result += start;

	printf("�հ�: %d \n", result);
	return 0;
}