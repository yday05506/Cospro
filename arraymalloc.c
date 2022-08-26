#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;
	printf("입력 할 정수 개수를 입력 >> ");
	scanf("%d", &n);

	int* ary = NULL;

	// 동적 메모리 할당 기술
	if ((ary = (int*)malloc(sizeof(int) * n)) == NULL) {
		printf("메모리 할당에 문제가 있습니다.");
		exit(1);
	}

	// 표준 입력과 처리
	printf("%d개의 정수 입력 >> ", n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", (ary + i));
		sum += *(ary + i);	// sum += ary[i];
	}
	printf("입력 정수 : ");
	for (int i = 0; i < n; i++) {
		printf("%d", *(ary + i));
	}
	printf("\n");
	printf("합 : %d, 평균 : %.1f\n", sum, (double)sum / n);

	free(ary);

	return 0;
}