#include <stdio.h>
#include <string.h>


int main(void) {
	// s1에서 독일이 있는지 검색하고, 있다면 몇 번째인지 반환하는 프로그램
	// 이때 독일이 여러 개 있다면 모두 검색
	char s1[7][10] = { "한국", "미국", "일본", "영국", "독일", "호주", "독일" };
	char key[] = { "독일" };
	int i, j;
	// int len = strlen(s1);

	for (i = 0; i < 7; i++) {
		printf("%s\n", s1[i]);
		if (strcmp(key, s1[i]) == 0) {
			printf("배열 안 독일 위치 : %d번째\n", i + 1);
		}
	}

	return 0;
}