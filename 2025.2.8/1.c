#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_1(void)
{
	int n = 0;
	int* p = &n;
	*p = 100;
	printf("%d", n);

	return 0;
}