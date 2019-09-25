#include <stdio.h>

/**
 *main - finds and prints the sum of all even fibonacci numbers under 4,000,000
 *
 *Return: 0
 */
int main(void)
{
	int a;
	long int b = 1, c = 2, sum = 0, total = 2;

	for (a = 3; sum < 4000000; a++)
	{
		sum = b + c;
		b = c;
		c = sum;
		if (sum % 2 == 0)
			total += sum;
	}
	printf("%li\n", total);
	return (0);
}
