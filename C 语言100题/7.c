#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_7(void)
{
	int sign = -1;
	double sum = 0;
	double i = 0;
	for (i = 1; i <= 100; i++)
	{
		sign = sign * (-1);
		sum = sum + (1.0 / i) * sign;
	}
	printf("sum = %lf\n", sum);
	return 0;
}