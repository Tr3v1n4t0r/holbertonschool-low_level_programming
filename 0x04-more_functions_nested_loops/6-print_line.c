#include "holberton.h"

/**
 *print_line - Prints a straight line
 *
 *@n: int
 *
 *Return: 0
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar ('\n');
	else
	{
		while (n > 0)
		{
			_putchar ('_');
			n--;
		}
		_putchar ('\n');
	}
}
