#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 10
#define COL 10
void doboard(char board[ROW][COL], int row, int col);
void remakeboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);
int iswin(char board[ROW][COL], int row, int col);