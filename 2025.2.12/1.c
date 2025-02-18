#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bubble_sort(int* arr, int size)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}



void print_arr(int* arr, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}
void input(int* arr,int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
}

int main_1(void)
{
	int arr[10] = { 0 };
	input(arr, 10);
	bubble_sort(arr, 10);
	print_arr(arr, 10);
	return 0;

}