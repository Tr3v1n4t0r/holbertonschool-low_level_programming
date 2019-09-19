#include "holberton.h"

/**
 *print_binary - prints the binary representation of a number
 *
 *@n: unsigned long int
 *
 *Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	int print = 0;

	if (n == 0)
		_putchar('0');
	else
	{
		for (i = 1UL << 63; i > 0; i >>= 1)
		{
			if (n & i)
			{
				_putchar('1');
				print = 1;
			}
			else if (print)
				_putchar('0');
		}
	}
}