#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_3(void)
{
	int i = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
		{
			printf("%d ", i);
		}
	}
	return 0;
}