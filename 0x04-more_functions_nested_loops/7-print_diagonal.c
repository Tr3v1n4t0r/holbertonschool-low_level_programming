#include "holberton.h"

/**
 *print_diagonal - prints a diagonal line of legnth n
 *
 *@n: int
 *
 *Return: 0
 */
void print_diagonal(int n)
{
	int a, b;

	if  (n > 0)
	{
		for (a = 0 ; a < n ; a++)
		{
			for (b = 0 ; b < a ; b++)
				_putchar (' ');
			_putchar ('\\');
			_putchar ('\n');
		}
	}
	else
		_putchar ('\n');
}
