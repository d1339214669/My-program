#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for(i=0; i<row; i++)
		for(j=0; j<col; j++)
			board[i][j] = ' ';
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for(i = 0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");
		if(i<row-1)
		{
			for(j=0; j<col; j++)
			{
			    printf("--- ");
			}
			printf("\n");
		}
			
	}
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col-1; j++)
		{
		    if(board[i][j]==board[i][j+1])
				count++;
			if(count==col-1)
				return board[i][j];
		}
		count = 0;
	}
	for(j=0; j<col; j++)
	{
		for(i=0; i<row-1; i++)
		{
		    if(board[i][j]==board[i+1][j])
				count++;
			if(count==row-1)
				return board[i][j];
		}
		count = 0;
	}
	for(i=0; i<row-1; i++)
	{
		if(board[i][i]==board[i+1][i+1])
			count++;
		if(count==row-1)
			return board[i][i];
	}
	count = 0;
	for(i=0; i<row-1; i++)
	{
		if(board[i][row-i-1]==board[i+1][row-i-2])
			count++;
		if(count==row-1)
			return board[i][row-i-1];
	}
	for(i = 0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(board[i][j]!=' ')
				count++;
			if(count==row*col)
				return 0;
		}
	}
	return ' ';
}

void PlayMove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	while(1)
	{
		printf("玩家走:>\n");
	    scanf("%d%d", &i, &j);
	    if(i<=row && i>0 && j>0 && j<=col && board[i-1][j-1]==' ')
	    {
		    board[i-1][j-1] = 'X';
	        break;
	    }
	    else
		    printf("输入坐标有误,请重新输入！");
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	srand((unsigned) time (NULL));
	printf("电脑走:>\n");
	while(1)
	{
	    i = rand()%row;
	    j = rand()%col;
	    if(board[i][j] == ' ')
		{
			board[i][j] = '0';
			break;
		}
	}
}

void game()
{
	char board[ROW][COL] = {0};
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while(1)
	{
		PlayMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if(IsWin(board,ROW,COL)=='X')
		{
			printf("玩家赢\n");
			break;
		}
		if(IsWin(board,ROW,COL)=='0')
		{
			printf("电脑赢\n");
			break;
		}
		if(IsWin(board,ROW,COL)==0)
		{
			printf("平局\n");
			break;
		}
		ComputerMove(board, ROW, COL);
	    DisplayBoard(board, ROW, COL);
		if(IsWin(board,ROW,COL)=='X')
		{
			printf("玩家赢\n");
			break;
		}
		if(IsWin(board,ROW,COL)=='0')
		{
			printf("电脑赢\n");
			break;
		}
		if(IsWin(board,ROW,COL)==0)
		{
			printf("平局\n");
			break;
		}
	}
}

int Meau()
{
	int choice = 0;
	printf("************************\n");
	printf("****** 1.开始游戏 ******\n");
	printf("****** 0.退出游戏 ******\n");
	printf("************************\n");
	scanf("%d", &choice);
	return choice;
}
int main()
{
	while(1)
	{
		int choice = 0;
		choice = Meau();
		switch(choice)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			return 0;
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	}
	return 0;
}