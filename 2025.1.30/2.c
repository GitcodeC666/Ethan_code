#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void change_arr(int arr[], int size, int num)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		arr[i] = num;
	}
}

void printA(void)
{
	printf("local brother!");
}
void print_arr(int arr[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main_2(void)
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	change_arr(arr, size, 6);
	print_arr(arr, size);
	return 0;
}




