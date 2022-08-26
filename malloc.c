#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* pi = NULL;

	// 동적 메모리 할당
	pi = (int*)malloc(sizeof(int));

	// 동적 메모리 할당 성공 검사
	if (pi == NULL) {
		printf("메모리 할당에 문제가 있습니다.");
		exit(1);
	}
	*pi = 3;	// heap 하다
	printf("주소 값 : *pi = %d, 저장 값 : pi = %d\n", pi, *pi);

	free(pi);

	return 0;
}