#include <stdio.h>

int main(void)
{
	int max = 0;	//�ִ밪 ���� �� ���� ���� ������ ����
	int min = 999;
	int maxPosition, minPosition;
	int arr[10] = { 2,5,78,43,-45,68,31,100,45,23 };

	//�ִ밪 ��ġ
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		if (max < arr[i])	//max���� i��° ���� ��
		{
			max = arr[i];	//max���� ū i��° ���� ����
			maxPosition = i;	//��ġ�� ���
		}
	}

	//�ּҰ� ��ġ
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		if (min > arr[i])	
		{
			min = arr[i];	
			minPosition = i;
		}
	}

	printf("�ִ밪�� ��ġ : %d\n", ++maxPosition);
	printf("�ּҰ��� ��ġ : %d\n", ++minPosition);
	
	return 0;
}