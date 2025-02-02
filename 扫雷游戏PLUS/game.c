#define _CRT_SECURE_NO_WARNINGS
#include "game.h"


void menu(void)
{
	printf("*********************\n");
	printf("******��ӭ����*******\n");
	printf("******ɨ����Ϸ*******\n");
	printf("******1. enter*******\n");
	printf("******0. exit *******\n");
	printf("*********************\n");
	printf("��1���룬��0�˳�\n");
	printf("�ǵð�enter��\n");
}

void Init_Board(char board[ROWS][COLS], int rows, int cols, char put)
{
	//��ʼ������
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
	printf("-------ɨ��--------\n");
	//��ӡ����
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
	//��������ķ�Χ��1~9
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
		printf("��������Ҫ�Ų������(x,y),��Χ��1~9\n");
		printf("�����꣺\n");
		scanf("%d", &x);
		printf("�����꣺\n");
		scanf("%d", &y);
		if (board1[x][y] == '1')
		{
			printf("���ź������������ˣ���Ϸ�������׵ķֲ����£�\n");
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
			printf("���������������������룺\n");
		}
	}
	if (win == row * col - Mine_Number)
	{
		printf("��ϲ�㣡���׳ɹ���̫�����ˣ���\n");
	}
}