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
	printf("%d\n", *pz);	// 12 : 사용 완료, 할당 해제
	pz = add(x, y);
	printf("%d\n", *pz);	// 주소값 : 리턴 값이 존재하지 않음
	return 0;
}