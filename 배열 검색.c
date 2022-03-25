#include <stdio.h>

int main(void)
{
	int num1;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	scanf("%d", &num1);

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		if (num1 == arr[i])
		{
			printf("%d번째 요소에 %d 숫자가 있습니다.\n", ++i, num1);
			break;
		}
	}

	return 0;
}