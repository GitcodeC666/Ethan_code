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
		printf("��������\n");
	}
	else if (a < b + c && b < a + c && c < a + b )
	{
		if (a != b && b != c && a != c)
		{
			printf("��ͨ������\n");
		}
		else if (a == b && a == c && b == c)
		{
			printf("�ȱ�������\n");
		}
		else
		{
			printf("����������\n");
		}
	}
	return 0;
}