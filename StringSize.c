#include <stdio.h>

int main(void)
{
	char s1[20] = { "coding test" };
	char s2[20];
	
	int i, j;
	int cnt = 0;	//0, \0이 나올 때까지
	
	while (s1[cnt] != 0 || s1[cnt] != '\0')
	{
		cnt++;
	}
	printf("문자열의 길이 : %d\n", cnt);

	cnt = 0;

	for (i = 0; i < 20; i++)
	{
		if (s1[i] == 0 || s1[i] == '\0')
			break; 
		cnt++;
	}
	printf("문자열의 길이 : %d\n", cnt);

	for (i = 0; i <= cnt; i++)
	{
		s2[i] = s1[i];
	}
	printf("복사본 : %s", s2);
}