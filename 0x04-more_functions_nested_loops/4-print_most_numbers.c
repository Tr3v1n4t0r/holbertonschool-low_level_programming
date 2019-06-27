#include "holberton.h"

/**
 *print_most_numbers - prints numbers between 0 and 9 but not 2 or 4
 *
 *Return: 0
*/
void print_most_numbers(void)
{
	int a;

	for (a = '0' ; a <= '9' ; a++)
	{
		if (a != '2' && a != '4')
			_putchar (a);
	}
	_putchar ('\n');
}
