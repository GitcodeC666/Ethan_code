#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print(int (*p)[5], int x, int y)
{
	int i = 0;
}
int main(void)
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int (*p)[10] = &arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", (*p)[i]);
	
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7} };
	print(arr, 3, 5);

	return 0;
}