#include "holberton.h"

/**
 *print_triangle - prints triangles of size 'size'
 *
 *@size: size of triangle
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = size; a > 0; a--)
	{
		for (b = 0; b < a - 1; b++)
			_putchar(' ');
		for (c = size; c >= a; c--)
			_putchar('#');
		_putchar('\n');
	}
}
