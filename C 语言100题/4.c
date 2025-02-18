#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_4(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b + c || b > a + c || c > a + b)
	{
		printf("非三角形\n");
	}
	else if (a < b + c && b < a + c && c < a + b )
	{
		if (a != b && b != c && a != c)
		{
			printf("普通三角形\n");
		}
		else if (a == b && a == c && b == c)
		{
			printf("等边三角形\n");
		}
		else
		{
			printf("等腰三角形\n");
		}
	}
	return 0;
}