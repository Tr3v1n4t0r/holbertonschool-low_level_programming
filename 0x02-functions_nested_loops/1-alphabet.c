#include "holberton.h"

/**
 *print_alphabet - check the code for Holberton School students.
 *
 *Return: Always 0.
 */
void print_alphabet(void)
{
	char s;

	for (s = 'a' ; s <= 'z' ; s++)
		_putchar (s);

	_putchar ('\n');
}
