#include "holberton.h"

/**
 *print_to_98 - prints all natural numbers from n to 98
 *
 *@n: integer
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		_putchar('9');
		_putchar('8');
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n > 99)
			{
				_putchar(n / 100 + '0');
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
		}
	}
	else
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
			{
				if (n < 0)
				{
					_putchar('-');
					if (-n / 10 != 0)
					{
						_putchar(-n / 10 + '0');
					}
					_putchar(-n % 10 + '0');
				}
				else if (n < 10)
				{
					_putchar(n + '0');
				}
				else
				{
					_putchar(n / 10 + '0');
					_putchar(n % 10 + '0');
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('9');
				_putchar('8');
			}
		}
	}
	_putchar('\n');
}
