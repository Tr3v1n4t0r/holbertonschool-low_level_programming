#include "holberton.h"

/**
 *more_numbers - prints the numbers 1 - 14 10 times
 *
 *Return: 0
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 14 ; b++)
		{
			if (b > 9)
			{
				_putchar ('0' + (b / 10));
				_putchar ('0' + (b % 10));
			}
			else
				_putchar ('0' + b);
		}
		_putchar ('\n');
	}
}
