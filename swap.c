#include <stdio.h>

int main(void)
{
	int m = 100, n = 200, dummy;

	printf(" %d, %d\n", m, n);

	// ���� m�� n�� ������� �ʰ� �� ������ ���� ��ȯ
	// dummy = m;
	// m = n;
	// n = dummy;
	int* p = &m;	
	dummy = *p;	// *p == m	dummy = n
	*p = n;	// m���� n�� ����
	p = &n;
	n = dummy;
}