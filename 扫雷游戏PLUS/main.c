#define _CRT_SECURE_NO_WARNINGS
#include "game.h"


int main(void)
{
	srand((unsigned int)time(NULL));
	menu();
	int input = 0;
	do
	{
		scanf("%d", &input);
		if (input == 1)
		{
			printf("��ʽ����ɨ����Ϸ��\n");
			char Mine_Board[ROWS][COLS] = { 0 };
			char Sweep_Board[ROWS][COLS] = { 0 };
			Init_Board(Mine_Board, ROWS, COLS, '0');
			Init_Board(Sweep_Board, ROWS, COLS, '*');
			Print_Board(Sweep_Board, ROW, COL);
			Set_Mine(Mine_Board, ROW, COL);
			Sweep_Mine(Mine_Board, Sweep_Board, ROW, COL);
			break;

		}
		else if (input == 0)
		{
			printf("�˳���Ϸ��\n");
			break;
		}
		else
		{
			printf("����������������룡\n");
		}
	} while (input);

	return 0;
}