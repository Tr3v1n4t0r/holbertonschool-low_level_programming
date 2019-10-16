#include "holberton.h"

/**
 *free_grid - frees memory for a 2 dimesional array
 *
 *@grid: int
 *@height: int
 *
 *Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
