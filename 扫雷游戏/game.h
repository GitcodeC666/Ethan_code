#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define Mine_Number 10
void menu(void);
void Init_Board(char board[ROWS][COLS], int rows, int cols, char put);
void Print_Board(char board[ROWS][COLS], int rows, int cols);
void Set_Mine(char board[ROWS][COLS], int rows, int cols);
void Sweep_Mine(char board1[ROWS][COLS], char board2[ROWS][COLS], int row, int col);
int Add(char board[ROWS][COLS], int x, int y);
void Expand(char board1[ROWS][COLS], char board2[ROWS][COLS], int x, int y, int* win);

