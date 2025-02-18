#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_5_2(void)
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int i = 0;
	int num = 0;
	int k = 0;
	for (i = 1; i < m && i < n; i++)
	{
		if (m % i == 0 && n % i == 0)
		{
			num = i;
		}
	}
	printf("%d\n", num);
	return 0;
}