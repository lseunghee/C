/*
Question 3
���α׷� ����ڷκ��� �̸��� ���̸� ������ ���Ŀ� ���缭 �ϳ��� ���ڿ��� �Է� �޴´�.
"������ 29"
"�Ѽ��� 7"
"������ 17"

�̸��� �� ���ڰ� �ƴҼ��� �ְ� �������� �Էµ� �� �ִ�. ��, �̸��� ���� ���̿���
������ ���ԵǾ�� �Ѵ�. �̷��� �������� �� ����� ������ �Է� �޾Ƽ� �̸��� ���̰� ���� ������ �ٸ���
�� �Ǵ��Ͽ� ����ϴ� ���α׷��� �ۼ��غ���.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int GetSpaceIdx(char str[]) {
	int len, i;
	len = strlen(str);
	for (i = 0; i < len; i++) {
		if (str[i] == ' ')
			return i;
	}
	return -1;
}
int CompName(char str1[], char str2[]) {
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);

	if (idx1 != idx2)
		return 0;
	else
		return !strncmp(str1, str2, idx1);
}
int CompAge(char str1[], char str2[]) {
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);
	int ag1, ag2;

	ag1 = atoi(&str1[idx1 + 1]); // str1[idx1+1]�� ���̰� ����� ��ġ
	ag2 = atoi(&str2[idx2 + 1]); // str2[idx2+1]�� ���̰� ����� ��ġ

	if (ag1 == ag2)
		return 1;
	else
		return 0;
}

int main(void) {
	char str1[20];
	char str2[20];

	printf("ù ��° ��� ���� �Է�: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	printf("�� ��° ��� ���� �Է�: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	if(CompName(str1, str2))
		puts("�̸��� �����մϴ�.");
	else
		puts("�̸��� �������� �ʽ��ϴ�.");

	if(CompAge(str1, str2))
		puts("���̰� �����ϴ�.");
	else
		puts("���̰� ���� �ʽ��ϴ�.");

	return 0;
}