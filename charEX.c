#include <stdio.h>

int main(void)
{
	char ch = '9';
	int number = ch - 48;
	int n = 9;

	printf("문자 : %c, 수 : %d, 수 : %d\n", ch, number, n);

	ch = ch + 1;
	number = number + 1;
	n = n + 1;

	printf("문자 : %c, 수 : %d, 수 : %d\n", ch, number, n);

	ch = ch + '1';
	number = number + '1';
	n = n + '1';

	printf("문자 : %c, 수 : %d, 수 : %d\n", ch, number, n);

	return 0;
}