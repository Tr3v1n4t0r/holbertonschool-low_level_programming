#include "variadic_functions.h"

/**
 *sum_them_all - sums all parameters
 *
 *@n: constant unsigned int
 *
 *Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int count;

	va_start(valist, n);

	for (count = 0; count < n; count++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
