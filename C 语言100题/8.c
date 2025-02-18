#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[10] = { 0 };
	int i = 0;
	int j = 0;
	int input = 0;
	int min = 0;
	int max = 0;
	for (input = 0; input < 10; input++)
	{
		scanf("%d", &arr[input]);
	}
	max = arr[0];
	min = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	int cha = max - min;
	printf("%d\n", cha);
	return 0;
}