#include "holberton.h"
#include <stdlib.h>

/**
 *alloc_grid - returns  pointer to a 2 dimensional array
 *
 *@width: int
 *@height: int
 *
 *Return: a pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width < 1 || height < 1)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= i; j++)
				free(arr[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
