/*
����(Celsius) �µ��� �Է��ϸ� ȭ��(Fahrenheit)�µ��� ��ȯ�ϴ� CelToFah��� �̸��� �Լ���  �� �ݴ�� ȭ�� �µ��� �Է��ϸ� ���� �µ��� ��ȯ�ϴ� FahToCel���
�̸��� �Լ��� �����ϰ� �� �� �Լ��� ȣ���ϴ� ������ �ϼ��غ���. ����� ������ ȭ���� �µ���ȯ�� ������ ������ ����.
Fah=1.8xCel+32
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double CelToFah(double c) {
	return 1.8*c + 32;
}
double FahToCel(double f) {
	return (f - 32) / 1.8;
}

int main(void) {
	int sel;
	double num;
	printf("1. ������ ȭ���� 2.ȭ���� ������ \n");
	printf("����>>");
	scanf("%d", &sel);

	if (sel == 1) {
		printf("���� �Է�: ");
		scanf("%lf", &num);
		printf("��ȯ�� ȭ��: %f \n", CelToFah(num));
	}
	else if (sel == 2) {
		printf("ȭ�� �Է�: ");
		scanf("%lf", &num);
		printf("��ȯ�� ����: %f \n", FahToCel(num));
	}
	else
		printf("���� ���� \n");

	return 0;
}