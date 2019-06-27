#include "holberton.h"

/**
 *print_numbers - prints the numbers 1 to 9 and a new line
 *
 *Return: 0
 */
void print_numbers(void)
{
	int a;

	for (a = '0' ; a <= '9' ; a++)
		_putchar (a);
	_putchar ('\n');
}
