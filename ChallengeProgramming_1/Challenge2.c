/*
Challenge 2
���α׷� ����ڷκ��� �� ���� ������ �Է� �޾Ƽ� �������� ������� ���α׷��� �ۼ��غ���.
���� �� ���α׷� ����ڰ� 3�� 5�� �Է��ϸ� 3��, 4��, 5���� ��µǾ�� �ϰ�, 2�� 4�� �Է��ϸ�
2��,3��,4���� ��µǾ�� �Ѵ�. �� �Ѱ��� ������ �ִ�. ����ڴ� �� ���� ���ڸ� �Է��� ���� �Է� ������ �����ο��� �Ѵ�.
3�� 5�� �Է��ϰ� 5�� 3�� �Է��ϰ� ���α׷��� ���� ����� ����ؾ� �Ѵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int googoodan(int num1, int num2) {
	if (num1 < num2) {
		for (int i = num1; i <= num2; i++) {
			for (int j = 1; j <= 9; j++)
				printf("%d x %d = %d \n", i, j, i*j);
			printf("\n");
		}
	}
	if (num2 < num1) {
		for (int i = num2; i <= num1; i++) {
			for (int j = 1; j <= 9; j++)
				printf("%d x %d = %d \n", i, j, i*j);
			printf("\n");
		}
	}
	
}

int main(void) {
	int num1, num2;
	printf("���� �� ���� �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);
	googoodan(num1, num2);
	
return 0;
}
