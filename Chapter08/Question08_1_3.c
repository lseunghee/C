/*
Question 3
�л��� ��ü ��������� ���� ������ ����ϴ� ���α׷��� �ۼ�����. �л��� ������ 90�� �̻��̸� A, 80�� �̻��̸� B, 70�� �̻��̸� C, 50�� �̻��̸� D�׸��� �� �̸��̸� F��!
���α׷� ���� �� ������� ����,����,������ ������ �Է� �޴´�. �׸���� ����� ���� ���� �׿� ������ ������ ����ϸ� �ȴ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int kor, eng, math;
	double avr;
	printf("����, ����, ������ ���� �Է�: ");
	scanf("%d %d %d", &kor, &eng, &math);
	avr = (kor + eng + math) / 3.0;
	printf("���: %f \n", avr);

	if (avr >= 90.0)
		printf("A! \n");
	else if (avr >= 80.0)
		printf("B! \n");
	else if (avr >= 70.0)
		printf("C! \n");
	else if (avr >= 50.0)
		printf("D! \n");
	else
		printf("F! \n");
	
	return 0;
}