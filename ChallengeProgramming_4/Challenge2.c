/*
Challenge 2
���� 1���� ������ ���α׷��� ������ ���� ������. ����ü �迭�� �����ϴ� ���� �ƴ϶�,
����ü ������ �迭�� �����ϰ� ����ü ������ �������� �Ҵ��ϴ� ���·� ���α׷��� �� ������ ����.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct book {
	char writer[30];
	char name[30];
	int page;
} Book;

int main(void) {
	Book *books [3];

	printf("���� ���� �Է�\n");
	for (int i = 0; i < 3; i++) {
		books[i] = (Book *)malloc(sizeof(Book)); // �����Ҵ�

		printf("����: ");
		fgets(books[i]->writer, sizeof(books[i]->writer), stdin);

		printf("����: ");
		fgets(books[i]->name, sizeof(books[i]->name), stdin);

		printf("������ ��: ");
		scanf("%d", &books[i]->page);
		getc(stdin);
	}
	printf("���� ���� ���\n");
	for (int k = 0; k < 3; k++) {
		printf("����: ");
		fputs(books[k]->writer, stdout);
		
		printf("����: ");
		fputs(books[k]->name, stdout);

		printf("������ ��: %d \n", books[k]->page);
	}
	return 0;
}