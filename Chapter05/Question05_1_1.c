/*
Question 1
���α׷� ����ڷκ��� �� ���� x, y ��ǥ�� �Է� �޾Ƽ�, �� ���� �̷�� ���簢���� ���̸� ����Ͽ� ����ϴ� ���α׷��� �ۼ��غ���.
��, �� ����� x, y ��ǥ ���� �� �ϴ��� x, y ��ǥ ������ �۴ٰ� �����ϰ�, �� ����� ��ǥ������ ���� �Է� �޴� ���·� ������ �ۼ��غ���. ���� �� �� �ִ�
������ ���� ������ ����.
�� ����� x,y ��ǥ: 2 4
�� �ϴ��� x,y ��ǥ: 4 8
�� ���� �̷�� ���簢���� ���̴� 8�Դϴ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int xpos1, ypos1;
	int xpos2, ypos2;
	int area;

	printf("�� ����� x, y ��ǥ: ");
	scanf("%d %d", &xpos1, &ypos1);
	printf("�� �ϴ��� x, y ��ǥ: ");
	scanf("%d %d", &xpos2, &ypos2);
	area = (xpos2 - xpos1)*(ypos2 - ypos1);
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�. \n", area);
	return 0;
}