#include <stdio.h>

int main(void)
{
	int max = 0;	//최대값 구할 땐 제일 작은 값으로 시작
	int min = 999;
	int maxPosition, minPosition;
	int arr[10] = { 2,5,78,43,-45,68,31,100,45,23 };

	//최대값 위치
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		if (max < arr[i])	//max값과 i번째 숫자 비교
		{
			max = arr[i];	//max보다 큰 i번째 숫자 선택
			maxPosition = i;	//위치를 기록
		}
	}

	//최소값 위치
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		if (min > arr[i])	
		{
			min = arr[i];	
			minPosition = i;
		}
	}

	printf("최대값의 위치 : %d\n", ++maxPosition);
	printf("최소값의 위치 : %d\n", ++minPosition);
	
	return 0;
}