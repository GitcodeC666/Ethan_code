#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

size_t my_strlen(char* arr)
{
	size_t count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}

int main_2(void)
{
	char arr[] = "abcdef";
	size_t lenth = my_strlen(arr);
	printf("%zd", lenth);
	return 0;
}