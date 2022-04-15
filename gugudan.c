#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;
	int gob = i * j;

	for (i = 1; i <= 9; i++) {
		
		for (j = 2; j <= 9; j++) {
			printf("%d X %d = %d\t", j, i, gob);
		}
		printf("\n");
	}

	return 0;
}