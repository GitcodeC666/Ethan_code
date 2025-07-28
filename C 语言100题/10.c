/*某地发⽣了⼀件盗窃案，警察通过排查确定盗窃者必为4个嫌疑⼈的⼀个。
以下为4个嫌疑⼈的供词 :
A说：不是我。
B说：是C。
C说：是D。
D说：C在胡说
已知3个⼈说了真话，1个⼈说的是假话。现在请根据这些信息，写⼀个程序来确定到底谁是盗窃者*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void)
{
	int thieves = 0;
	for (thieves = 'a'; thieves <= 'd'; thieves++)
	{
		if (((thieves != 'a') + (thieves == 'c') + (thieves == 'd') + (thieves != 'd')) == 3)
		{
			printf("盗窃者为:%c\n", thieves);
		}
	}
	

	return 0;
}