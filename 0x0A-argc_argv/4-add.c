#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *is_positive - checks if positive
 *
 *@num: string to check
 *
 *Return: 0 if positive else 1
 */
int is_positive(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (!(isdigit(num[i])))
			return (0);
	}
	return (1);
}

/**
 *main - adds positive numbers
 *
 *@argc: number of arguments
 *@argv: arguments
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_positive(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%u\n", sum);
	return (0);
}
