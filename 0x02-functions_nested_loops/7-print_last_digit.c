#include "holberton.h"

/**
 *print_last_digit - Entry
 *
 *@r: int
 *
 *Return: Maybe 0.
 */
int print_last_digit(int r)
{
	if (r < 0)
		r = -1 * r;
	r = r % 10;
	_putchar ('0' + r);
	return (r);
}
