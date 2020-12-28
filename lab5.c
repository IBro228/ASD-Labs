﻿#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matrix[7][7] = {
	{-2, 3, 7, 12, 17, 17, 20},
	/* Варіанти першого рядка
	Вже відсортований , {-2, 3, 7, 12, 17, 17, 20},
	Не відсортований {17, 20, 17, 7, -2, 3, 12},
	Обернено відсортований {20, 17, 17, 12, 7, 3, -2}*/
	{19, 18, 14, 10, 6, 2, 2},
	{17, 15, 12, 9, 6, 3, 1},
	{18, 16, 11, 8, 7, 4, 2},
	{17, 14, 12, 10, 6, 1, 1},
	{20, 19, 15, 14, 11, 4, 7},
	{15, 13, 12, 8, 8, 5, 5}
	};
	int i, j;
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	int n = 7;
	i = 0;
	for (j = 0; j <= n - 1; j += 2)
	{
		int T = matrix[i][j];
		int w = 0;
		while (matrix[i][w] < T)
		{
			w = w + 2;
		}
		for (int k = j - 2; k >= w; k -= 2)
		{
			matrix[i][k + 2] = matrix[i][k];
		}
		matrix[i][w] = T;
	}
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}
