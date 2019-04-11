/*
앞서 22-1에서 정의한 employee 구조체를 기반으로 길이가 3인 배열을 선언하자.
그리고 세 명의 정보를 프로그램 사용자로부터 입력 받아서 배열에 저장한 다음,
배열에 저장된 데이터를 순서대로 출력하는 예제를 작성해보자.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct employee {
	char name[20];
	char pid[20];
	int salary;
};

int main(void) {
	struct employee arr[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("이름: ");
		scanf("%s", arr[i].name);
		printf("주민번호: ");
		scanf("%s", arr[i].pid);
		printf("급여: ");
		scanf("%d", &arr[i].salary);
	}

	for (i = 0; i < 3; i++) {
		printf("이름: %s \n", arr[i].name);
		printf("주민번호: %s \n", arr[i].pid);
		printf("급여: %d \n", arr[i].salary);
	}
	return 0;
}