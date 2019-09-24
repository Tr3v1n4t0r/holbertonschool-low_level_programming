#include <stdio.h>

/**
 *main - prints all multiples of 3 and 5 below 1024
 *
 *Return: 0
 */
int main(void)
{
	int a;
	unsigned int sum;

	for (a = 0; a <= 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			sum += a;
	}
	printf("%u\n", sum);
	return (0);
}
