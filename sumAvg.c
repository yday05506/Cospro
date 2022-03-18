#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i]= rand() % 100 + 1;
		printf("%d ", a[i]);
	}

	int sum = 0;
	double avg = 0;

	for (int i = 0; i < 10; i++)
	{
		sum += a[i];
	}

	avg = (double)sum / (sizeof(a) / sizeof(int));

	printf("ÇÕ°è : %d, Æò±Õ : %.1f", sum, avg);
}