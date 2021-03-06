#include <stdio.h>

int main(void)
{
	int value = 0x61626364;
	int* pi = &value;
	char* pc = (char*)&value;

	printf("변수명\t저장값\t\t주소값\n");
	printf("----------------------------------\n");
	printf("value\t%0#x\t%u\n", value, pi);	// 정수 출력

	// 문자 포인터로 문자 출력 모듈
	for (int i = 0; i <= 3; i++) {
		char ch = *(pc + i);
		printf("*(pc + %d)\t%#6x\t%2c %u\n", i, ch, ch, pc + i);
	}

	return 0;
}