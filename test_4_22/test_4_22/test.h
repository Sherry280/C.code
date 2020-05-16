#ifndef _TESH_H_
#define _TESH_H_

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

#define ROW 12
#define COL 12
#define NUM 20


void Game();
void InitBoard(char board[][COL],int row, int col,char elem);

void SetMine(char mine[][COL], int row, int col);
void ShowBoard(char board[][COL], int row, int col);
char GetNum(char mine[][COL], int x, int y);


#endif