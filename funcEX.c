#include <stdio.h>

void display(int a, char b) {
	for (int i = 0; i < a; i++) {
		printf("%c", b);
	}
	printf("\n");
}

void isEven(int n) {
	if (n % 2 == 0)
		printf("¦���Դϴ�");
	else
		printf("Ȧ���Դϴ�");
}

int main(void)
{
	display(20, '#');
	isEven(20);

	return 0;
}