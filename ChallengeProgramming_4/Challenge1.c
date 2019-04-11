/*
Challenge 1
간단한 도서 관리용 프로그램을 작성해 보자. [제목, 저자명, 페이지수]에 대한 정보를
저장할 수 있는 구조체를 정의하고, 구조체 배열을 선언해서 도서에 대한 정보를 저장하는
구조로 작성해 보자. main함수에서는 사용자로부터 3권의 도서에 대한 정보를 입력 받고,
입력이 끝나면 도서에 대한 내용을 출력해 주도록 하자.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct book {
	char writer[30];
	char name[30];
	int page;
} Book;

int main(void) {
	Book books[3];

	printf("도서 정보 입력\n");
	for (int i = 0; i < 3; i++) {
		printf("저자: ");
		fgets(books[i].writer, sizeof(books[i].writer), stdin);

		printf("제목: ");
		fgets(books[i].name, sizeof(books[i].name), stdin);

		printf("페이지 수: ");
		scanf("%d", &books[i].page);
		getc(stdin);
	}
	printf("도서 정보 출력\n");
	printf("book 1\n");
	for (int k = 0; k < 3; k++) {
		printf("저자: ");
		fputs(books[k].writer, stdout);

		printf("제목: ");
		fputs(books[k].name, stdout);

		printf("페이지 수: %d\n", books[k].page);
	}
	return 0;
}