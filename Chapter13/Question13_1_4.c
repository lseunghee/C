/*
Question 4
���̰� 6�� int�� �迭 arr�� �����ϰ� �̸� 1,2,3,4,5,6���� �ʱ�ȭ�� ����,
�迭�� ����� ���� ������ 6,5,4,3,2,1�� �ǵ��� �����ϴ� ������ �ۼ��غ���.
��, �迭�� �հ� �ڸ� ����Ű�� ������ ���� �� ���� �����ؼ� �̸� Ȱ���Ͽ�
����� ���� ������ �ڹٲ�� �Ѵ�.
*/

#include <stdio.h>

int main(void){
	int arr[6] = { 1,2,3,4,5,6 };
	int *ptr1 = &arr[0];
	int *ptr2 = &arr[5];
	int i, temp;

	printf("�迭�� ��� ���\n");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	for (i = 0; i < 3; i++) {
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;

		++ptr1;
		--ptr2;
	}

	printf("�迭�� ��� ���\n");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}