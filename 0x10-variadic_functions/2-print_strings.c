#include "variadic_functions.h"

/**
 *print_strings - prints strings
 *
 *@separator: the string to be printed between the strings
 *@n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int count;
	char *string;

	va_start(valist, n);

	for (count = 0; count < n; count++)
	{
		string = va_arg(valist, char *);
		if (count != 0)
			printf("%s", (separator ? separator : ""));
		printf("%s", (string ? string : "(nil)"));
	}

	va_end(valist);
	printf("\n");
}
