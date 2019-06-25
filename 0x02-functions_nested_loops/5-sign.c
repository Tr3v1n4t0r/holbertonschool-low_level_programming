#include "holberton.h"

/**
 *print_sign - Entry
 *
 *@c: int
 *
 *Return: 0
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
