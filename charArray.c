#include <stdio.h>

int main(void)
{
	char color[5][10] = { "red", "green", "blue", "brown", "cyan" };

	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", color[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%c  ", color[i][j]);
		}
		printf("\n");
	}

	return 0;
}