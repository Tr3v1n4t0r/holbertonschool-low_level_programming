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

	printf("1, 2, ");
	for (a = 1; a <= 50; a++)
	{
		sum = b + c;
		b = c;
		c = sum;
		printf("%li", sum);
		if (a != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
