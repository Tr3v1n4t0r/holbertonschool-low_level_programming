#include <stdio.h>

/**
 *main - prints the first 50 Fibonacci numbers
 *
 *Return: 0
 */
int main(void)
{
	int a;
	long int b = 1, c = 2, sum = 0;

	printf("1\n2\n");
	for (a = 0; a <= 50; a++)
	{
		sum = b + c;
		b = c;
		c = sum;
		printf("%li\n", sum);
	}
	return (0);
}
