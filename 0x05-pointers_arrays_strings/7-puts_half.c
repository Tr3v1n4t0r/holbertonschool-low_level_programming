#include "holberton.h"

/**
 *puts_half - prints half of a string
 *
 *@str: string
 *
 *Return: 0
 */
void puts_half(char *str)
{
	int count;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	if (count % 2 == 0)
		count = count / 2;
	else
		count = (count - 1) / 2;

	str = str - count;
	for (; *str != '\0' ; str++)
		_putchar (*str);
	_putchar ('\n');
}
