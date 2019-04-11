/*
Challenge 2
도전 1에서 구현한 프로그램에 변경을 조금 가하자. 구조체 배열을 선언하는 것이 아니라,
구조체 포인터 배열을 선언하고 구조체 변수를 동적으로 할당하는 형태로 프로그램을 재 구현해 보자.
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

	printf("도서 정보 입력\n");
	for (int i = 0; i < 3; i++) {
		books[i] = (Book *)malloc(sizeof(Book)); // 동적할당

		printf("저자: ");
		fgets(books[i]->writer, sizeof(books[i]->writer), stdin);

		printf("제목: ");
		fgets(books[i]->name, sizeof(books[i]->name), stdin);

		printf("페이지 수: ");
		scanf("%d", &books[i]->page);
		getc(stdin);
	}
	printf("도서 정보 출력\n");
	for (int k = 0; k < 3; k++) {
		printf("저자: ");
		fputs(books[k]->writer, stdout);
		
		printf("제목: ");
		fputs(books[k]->name, stdout);

		printf("페이지 수: %d \n", books[k]->page);
	}
	return 0;
}