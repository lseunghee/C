/*
���� 1���� �ۼ��� ���Ͽ� �����͸� �߰�����. �߰��� �����ʹ� ��� �Դ� ������ ������ ����̴�.
�Է��� ���´� ������ ���ƾ� �Ѵ�.
#��ܸԴ� ����: «��, ������
#���: �౸
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE *fp = fopen("mystory.txt", "at");
	fputs("#��ܸԴ� ����: «��, ������ \n", fp);
	fputs("#���: �౸ \n", fp);
	fclose(fp);
	return 0;
}