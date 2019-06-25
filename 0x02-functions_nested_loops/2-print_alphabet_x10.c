#include "holberton.h"

/**
 *print_alphabet_x10 - Entry point
 *
 *Return: Always 0
 */
void print_alphabet_x10(void)
{
	char s;
	int d;

	for (d = '0' ; d <= '9' ; d++)
	{
		for (s = 'a' ; s <= 'z' ; s++)
			_putchar (s);
		_putchar ('\n');
	};
}
