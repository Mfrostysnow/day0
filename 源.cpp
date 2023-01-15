#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int main()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	int x, y;
	int i, j;
	int count = 0;
	int win = 0;

	srand((unsigned int)time(NULL));

	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	SetMine(mine, ROW, COL);

	while (1)
	{
		DisplayBoard(show, ROW, COL);
		printf("请输入坐标：>");
		scanf("%d%d", &x, &y);

		if (x<1 || x>ROW || y<1 || y>COL)
		{
			printf("坐标输入有误！\n");
			continue;
		}

		if (mine[x][y] == '1')
		{
			printf("你踩到雷了！\n");
			break;
		}
		else
		{
			FindMine(mine, show, x, y);
			count++;
		}

		if (count == ROW * COL - 10)
		{
			win = 1;
			break;
		}
	}

	if (win)
	{
		printf("恭喜你，你赢了！\n");
	}
	else
	{
		printf("很遗憾，你输了！\n");
		DisplayBoard(mine, ROW, COL);
	}

	return 0;
}
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i, j;

	for (i = 0; i;) {
	for (j = 0; j ;){
	board[i][j] = set;
	}
		}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i, j;

		printf(" ");
		for (i = 1; i <= col; i++)
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
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int x, y;
	int i;

	for (i = 0; i < 10; i++)
	{
		while (1)
		{
			x = rand() % row + 1;
			y = rand() % col + 1;

			if (board[x][y] == '0')
			{
				board[x][y] = '1';
				break;
			}
		}
	}
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int count = 0;
	int i, j;

	if (show[x][y] == '*')
	{
		for (i = x - 1; i <= x + 1; i++)
		{
			for (j = y - 1; j <= y + 1; j++)
			{
				if (mine[i][j] == '1')
				{
					count++;
				}
			}
		}

		if (count == 0)
		{
			show[x][y] = '0';

			for (i = x - 1; i <= x + 1; i++)
			{
				for (j = y - 1; j <= y + 1; j++)
				{
					FindMine(mine, show, i, j);
				}
			}
		}
		else
		{
			show[x][y] = count + '0';
		}
	}
}