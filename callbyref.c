#include <stdio.h>

int* add(int x, int y)
{
	int sum;
	sum = x + y;
	return &sum;
}

int main(void)
{
	int x = 5, y = 7;
	int* pz;
	pz = add(x, y);
	printf("%d\n", *pz);	// 12 : ��� �Ϸ�, �Ҵ� ����
	pz = add(x, y);
	printf("%d\n", *pz);	// �ּҰ� : ���� ���� �������� ����
	return 0;
}