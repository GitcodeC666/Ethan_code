#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int max(int m, int n)
{
	if (m >= n)
	{
		return m;
	}
	else
	{
		return n;
	}
}

int min(int m, int n)
{
	if (m <= n)
	{
		return m;
	}
	else
	{
		return n;
	}
}
int main_5(void)
{
	int m = 0;
	int n = 0;
	int num = 0;
	int i = 0;
	scanf("%d %d", &m, &n);
	n = max(m, n);
	m = min(m, n);
	for (i = 1; i <= m; i++)
	{
		if (m % i == 0)
		{
			if (n % i == 0)
			{
				num = i;
			}
		}
	}
	printf("%d", num);
	return 0;
}