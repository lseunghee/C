/*
Question 1
���� num�� ����� ���� ������ �����ϴ� �Լ��� �����ϰ�, �̸� ȣ���ϴ� main�Լ��� �ۼ��غ���. ��,
���⼭�� ���� �� ���� ���·� �Լ��� �����ؾ� �Ѵ�.
1. Call-by-velue ����� SquareByValue �Լ�
2. Call-by-reference ����� SquareByReference �Լ�

SquareByValue �Լ��� ���ڷ� ���޵� ���� ������ ��ȯ�ؾ� �ϸ�, SquareByReference �Լ���
������ ����Ǿ� �ִ� ������ �ּ� ���� ���ڷ� �޾Ƽ� �ش� ������ ����� ���� ������
�� ������ �ٽ� �����ؾ� �Ѵ�.
*/

#include <stdio.h>

int SquareByValue(int num) {
	return num * num;
}

void SquareByReference(int *ptr) {
	int num = *ptr;
	*ptr = num * num;
}

int main(void) {
	int num = 10;
	printf("%d \n", SquareByValue(num));
	SquareByReference(&num);
	printf("%d \n", num);
	return 0;
}