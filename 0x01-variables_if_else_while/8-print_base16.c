#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char a = 0;
	char b = a;

	for (a = '0' ; a <= '9' ; a++)
		putchar(a);
	for (b = 'a' ; b <= 'f' ; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
