#include <stdio.h>

/**
 *main - prints largest prime factor
 *
 *Return: 0
 */
int main(void)
{
	long long int a = 612852475143;
	int factor;

	for (factor = 2; factor <= a; factor++)
	{
		if (a % factor == 0)
		{
			a /= factor;
			factor--;
		}
	}
	printf("%d\n", factor);
	return (0);
}
