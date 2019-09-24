#include "holberton.h"

/**
 *print_times_table - prints the n times table
 *
 *@n: size of times table
 */
void print_times_table(int n)
{
	int a, b;
	if (n > 15 || n < 0)
		return;
	else
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (b == 0)
				{
					_putchar('0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					if ((a * b) < 100)
						_putchar(' ');
					if ((a * b) >= 10 && (a * b) < 100)
						_putchar(a * b / 10 + '0');
					else if ((a * b) >= 100)
					{
						_putchar(a * b / 100 + '0');
						_putchar((a * b % 100) / 10 + '0');
					}
					if ((a * b) < 10)
						_putchar(' ');
					_putchar(a * b % 10 + '0');
					if (b != n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
