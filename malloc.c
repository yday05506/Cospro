#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* pi = NULL;

	// ���� �޸� �Ҵ�
	pi = (int*)malloc(sizeof(int));

	// ���� �޸� �Ҵ� ���� �˻�
	if (pi == NULL) {
		printf("�޸� �Ҵ翡 ������ �ֽ��ϴ�.");
		exit(1);
	}
	*pi = 3;
	printf("�ּ� �� : *pi = %d, ���� �� : pi = %d\n", pi, *pi);

	free(pi);

	return 0;
}