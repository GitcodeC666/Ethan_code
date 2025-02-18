#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_1(void)
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}