#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a[10];
	int sum = 0;
	double avg = 0;
	srand(time(NULL));

	//���� ����
	for (int i = 0; i < sizeof(a)/sizeof(int); i++)
	{
		a[i]= rand() % 100 + 1;
		printf("%d ", a[i]);
		sum += a[i];
	}

	//���
	avg = (double)sum / (sizeof(a) / sizeof(int));

	printf("�հ� : %d, ��� : %.1f", sum, avg);

	return 0;
}