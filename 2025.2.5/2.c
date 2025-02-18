#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count_bit(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
}

int main_2(void)
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	count = count_bit(num);
	printf("%d", count);
	return 0;
}