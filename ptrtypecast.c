#include <stdio.h>

int main(void)
{
	int value = 0x61626364;
	int* pi = &value;
	char* pc = (char*)&value;

	printf("������\t���尪\t\t�ּҰ�\n");
	printf("----------------------------------\n");
	printf("value\t%0#x\t%u\n", value, pi);	// ���� ���

	// ���� �����ͷ� ���� ��� ���
	for (int i = 0; i <= 3; i++) {
		char ch = *(pc + i);
		printf("*(pc + %d)\t%#6x\t%2c %u\n", i, ch, ch, pc + i);
	}

	return 0;
}