/*
Question 2
���α׷� ����ڷκ��� �� ���� �Ǽ��� �Է� �޾Ƽ� double�� ������ ��������. �׸��� �� ���� ��Ģ���� ����� ����غ���.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double num1, num2;
	printf("�ΰ��� �Ǽ� �Է�: ");
	scanf("%lf %lf", &num1, &num2);
	
	printf("�� ���� ����: %f \n", num1+num2);
	printf("�� ���� ����: %f \n", num1 - num2);
	printf("�� ���� ����: %f \n", num1 * num2);
	printf("�� ���� ������: %f \n", num1 / num2);
	return 0;
}