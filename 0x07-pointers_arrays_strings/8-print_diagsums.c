#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of two diagonals
 *
 *@a: array
 *@size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * (size + 1)];
		sum2 += a[(i + 1) * (size - 1)];
	}
	printf("%i, %i\n", sum1, sum2);
}
