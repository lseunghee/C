#include <stdio.h>

void ClearLineFromReadBuffer(void) {
	while (getchar() != '\n'); // \n이 읽혀질 때까지 입력버퍼에 저장된 문자들을 지우는 함수
}
// 사용자가 잘못 입력을해도, 필요한 만큼만 읽어 들이고 나머지는 지워버리기 때문에 정상적으로 작동가능
int main(void) {
	char perID[7];
	char name[10];

	fputs("주민번호 앞 6자리 입력: ", stdout);
	fgets(perID, sizeof(perID), stdin);
	ClearLineFromReadBuffer(); // 입력버퍼 비우기

	fputs("이름 입력: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("주민번호: %s \n", perID);
	printf("이름: %s \n", name);

	return 0;
}