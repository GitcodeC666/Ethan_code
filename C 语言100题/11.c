#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <math.h>

int digitnum(int num)
{
	int i = 0;
	if (num == 0)
	{
		i = 1;
	}
	else
	{
		num = num / 10;
		i++;
	}
	return i;
}

int main(void)
{
	int i = 0;
	int j = 0;
	int digit = 0;
	for ( i = 0; i < 100000; i++)
	{
		digit = digitnum(i);
		
		
	}
	return 0;
}