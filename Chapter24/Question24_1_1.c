/*
프로그램상에서 mystory.txt라는 이름의 파일을 생성해서 본인의 이름, 주민번호, 전화번호를 저장하는 프로그램을 작성하자.
단, 저장의 형태는 다음과 같아야 한다(# 문자도 함께 저장되어야 한다.)
#이름: 이승희
#주민번호: 940507-1234567
#전화번호: 010-1111-2222
그리고 저장이 완료되면 메모장으로 확인이 가능해야 한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE *fp = fopen("mystory.txt", "wt");
	fputs("#이름: 이승희 \n", fp);
	fputs("#주민번호: 940507-1234567 \n", fp);
	fputs("#전화번호: 010-1111-2222 \n", fp);
	fclose(fp);
	return 0;
}