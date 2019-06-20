#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	char charType;
	double doubleType;
	long int longType;
	long long longlongType;

	printf("Size of a char: %ld byte\n", sizeof(charType));
	printf("Size of a int: %ld bytes\n", sizeof(intType));
	printf("Size of a long int: %ld bytes\n", sizeof(longType));
	printf("Size of a long long int: %ld bytes\n", sizeof(longlongType));
	printf("Size of a float: %ld bytes\n", sizeof(floatType));
	return (0);
}
