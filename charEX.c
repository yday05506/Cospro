#include <stdio.h>

int main(void)
{
	char ch = '9';
	int number = ch - 48;
	int n = 9;

	printf("���� : %c, �� : %d, �� : %d\n", ch, number, n);

	ch = ch + 1;
	number = number + 1;
	n = n + 1;

	printf("���� : %c, �� : %d, �� : %d\n", ch, number, n);

	ch = ch + '1';
	number = number + '1';
	n = n + '1';

	printf("���� : %c, �� : %d, �� : %d\n", ch, number, n);

	return 0;
}