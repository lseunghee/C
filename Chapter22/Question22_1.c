/*
���ڿ� ������ '������ �̸�'�� ���ڿ� ������ '�ֹε�Ϲ�ȣ' �׸��� ���� ������ '�޿�����'�� ������ �� �ִ�
employee��� �̸��� ����ü�� �����غ���. �׸��� ���� employee ����ü ������ �ϳ� ������ ����,
���α׷� ����ڰ� �Է��ϴ� ������ �� ������ ä����. �׸��� ���������� ����ü ������ ä���� �����͸� ����غ���.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct employee {
	char name[20];
	char pid[20];
	int salary;
};

int main(void) {
	struct employee emp;
	printf("�̸�: ");
	scanf("%s", emp.name);
	printf("�ֹι�ȣ: ");
	scanf("%s", emp.pid);
	printf("�޿�: ");
	scanf("%d", &emp.salary);

	printf("�̸�: %s \n", emp.name);
	printf("�ֹι�ȣ: %s \n", emp.pid);
	printf("�޿�: %d \n", emp.salary);
	return 0;
}