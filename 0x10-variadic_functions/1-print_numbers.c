#include "variadic_functions.h"

/**
 *print_numbeers - prints numbers
 *
 *@separator: constant char to be printed between numbers
 *@n: number of integers passed
 *
 *Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int count;

	va_start(valist, n);

	for (count = 0; count < n; count++)
	{
		printf("%i", va_arg(valist, int));
		if (count < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(valist);
}
