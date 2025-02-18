#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_1(void)
{
	int a = 0;
	int b = 0;
	a = 5;
	b = 3;
	printf("befor a = %d b = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after a = %d b = %d\n", a, b);
	
	return 0;
}