#include <stdio.h>

void display(int a, char b) {
	for (int i = 0; i < a; i++) {
		printf("%c", b);
	}
	printf("\n");
}

int isEven(int n) {
	return (n % 2 == 0 ? 1 : 0);
}

int main(void)
{
	display(20, '#');
	if (isEven(10) == 1)
		printf("Â¦¼öÀÔ´Ï´Ù");
	else
		printf("È¦¼öÀÔ´Ï´Ù");

	return 0;
}