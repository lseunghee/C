/*
Question 3
���α׷� ����ڷκ��� ���ܾ �Է� �޴´�. �׸��� ���� �Է� ���� ���ܾ �����ϴ� ���� �߿���
�ƽ�Ű �ڵ��� ���� ���� ū ���ڸ� ã�Ƽ� ����ϴ� ���α׷��� �ۼ��غ���. ���� �� �Էµ� ���ܾ
'LOVE'��� �� �߿��� �ƽ�Ű �ڵ� ���� ���� ū ���ڴ� V�̹Ƿ� V�� ��µǾ�� �Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i;
	int cnt = 0;
	char str[50];
	char max = 0;
	printf("�����Է�: ");
	scanf("%s", &str);

	while (str[cnt] != '\0')
		cnt++;
	
	for(i=0; i<cnt; i++)
		if (max < str[i])
			max = str[i];
		printf("�ƽ�Ű ���� ���� ū ����: %c\n", max);

		return 0;
}