#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_2(void)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}