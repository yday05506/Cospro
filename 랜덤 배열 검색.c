#include <stdio.h>
#include <time.h>

int main(void)
{
	int num1 = srand(time(NULL)) % 10 + 1;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;

	printf("발생한 수 : %d\n", num1);

	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		if (num1 == arr[i])
		{
			break;
		}
	}

	if (num1 < 10)
	{
		printf("%d 숫자는 %번째에 있습니다.\n", num1, ++i);
	}
}