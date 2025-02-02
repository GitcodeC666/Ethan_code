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
			printf("正式进入扫雷游戏！\n");
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
			printf("退出游戏！\n");
			break;
		}
		else
		{
			printf("输入错误，请重新输入！\n");
		}
	} while (input);

	return 0;
}