#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int r = 0;

	for (r = '0' ; r <= '9' ; r++)
		putchar(r);

	printf("\n");

	return (0);
}
