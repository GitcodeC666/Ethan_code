#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_f(int arr[10])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main_9_1(void)
{
	int arr[10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]); // 输入10个整数
	}
	for (i = 0; i < 9; i++)   //冒泡排序
	{
		for (j = 0; j < 9; )
		if (arr[j] > arr[j + 1])
		{
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
	}
	print_f(arr);
	return 0;
}