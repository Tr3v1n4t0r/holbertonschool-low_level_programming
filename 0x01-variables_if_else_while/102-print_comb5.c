#include <stdio.h>

/**
 *main - Prints all possible combinations of two two-digit numbers
 *
 *Return: Always 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if ((a == 0 && b != 0) || (b > a))
			{
				putchar(a / 10 + '0');
				putchar(a % 10 + '0');
				putchar(' ');
				putchar(b / 10 + '0');
				putchar(b % 10 + '0');
				if (a < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
}
