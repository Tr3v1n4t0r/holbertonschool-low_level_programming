#include "holberton.h"

/**
 *main - Entry point
 *
 *Return: Always 0
 */
int main(void)
{
	char *w = "Holberton\n";

	while (*w)
	{
		_putchar (*w++);
	}
	return (0);
}
