#include "holberton.h"

/**
 *swap_int - swaps two integer values
 *
 *@a: int
 *
 *@b: int
 *
 *Return: 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
