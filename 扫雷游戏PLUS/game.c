#define _CRT_SECURE_NO_WARNINGS
#include "game.h"


void menu(void)
{
	printf("*********************\n");
	printf("******欢迎来到*******\n");
	printf("******扫雷游戏*******\n");
	printf("******1. enter*******\n");
	printf("******0. exit *******\n");
	printf("*********************\n");
	printf("按1进入，按0退出\n");
	printf("记得按enter键\n");
}

void Init_Board(char board[ROWS][COLS], int rows, int cols, char put)
{
	//初始化棋盘
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = put;
		}
	}
}

void Print_Board(char board[ROWS][COLS], int row, int col)
{
	printf("-------扫雷--------\n");
	//打印棋盘
	int i = 0;
	int j = 0;
	for (i = 0; i <= 9; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void Set_Mine(char board[ROWS][COLS], int rows, int cols)
{
	int x = 0;
	int y = 0;
	//横纵坐标的范围是1~9
	int mine = Mine_Number;
	while (mine)
	{
		x = rand() % rows + 1;
		y = rand() % cols + 1;
		if (board[x][y] != '1')
		{
			board[x][y] = '1';
			mine--;
		}
	}
}
int Add(char board[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			sum = sum + (board[x + i][y + j] - '0');
		}
	}
	return sum;
}

void Sweep_Mine(char board1[ROWS][COLS], char board2[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - Mine_Number)
	{
		printf("输入你想要排查的坐标(x,y),范围是1~9\n");
		printf("横坐标：\n");
		scanf("%d", &x);
		printf("纵坐标：\n");
		scanf("%d", &y);
		if (board1[x][y] == '1')
		{
			printf("很遗憾，你碰到雷了！游戏结束，雷的分布如下：\n");
			Print_Board(board1, ROW, COL);
			break;
		}
		else if (board1[x][y] == '0')
		{
			int count = Add(board1, x, y);
			board2[x][y] = count + '0';
			Print_Board(board2, ROW, COL);
			win++;
		}
		else
		{
			printf("坐标输入有误，请重新输入：\n");
		}
	}
	if (win == row * col - Mine_Number)
	{
		printf("恭喜你！排雷成功，太厉害了！！\n");
	}
}