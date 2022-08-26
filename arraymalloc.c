#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;
	printf("�Է� �� ���� ������ �Է� >> ");
	scanf("%d", &n);

	int* ary = NULL;

	// ���� �޸� �Ҵ� ���
	if ((ary = (int*)malloc(sizeof(int) * n)) == NULL) {
		printf("�޸� �Ҵ翡 ������ �ֽ��ϴ�.");
		exit(1);
	}

	// ǥ�� �Է°� ó��
	printf("%d���� ���� �Է� >> ", n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", (ary + i));
		sum += *(ary + i);	// sum += ary[i];
	}
	printf("�Է� ���� : ");
	for (int i = 0; i < n; i++) {
		printf("%d", *(ary + i));
	}
	printf("\n");
	printf("�� : %d, ��� : %.1f\n", sum, (double)sum / n);

	free(ary);

	return 0;
}