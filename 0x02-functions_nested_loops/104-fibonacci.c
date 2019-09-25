#include <stdio.h>

/**
 *main - prints the first 50 Fibonacci numbers
 *
 *Return: 0
 */
int main(void)
{
	int a;
	unsigned long int b = 1, c = 2, sum = 0;

	printf("1, 2, ");
	for (a = 3; a <= 98; a++)
	{
		sum = b + c;
		b = c;
		c = sum;
		printf("%lu", sum);
		if (a != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
