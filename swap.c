#include <stdio.h>

int main(void)
{
	int m = 100, n = 200, dummy;

	printf(" %d, %d\n", m, n);

	// 변수 m과 n을 사용하지 않고 두 변수를 서로 교환
	// dummy = m;
	// m = n;
	// n = dummy;
	int* p = &m;	
	dummy = *p;	// *p == m	dummy = n
	*p = n;	// m값에 n을 저장
	p = &n;
	n = dummy;
}