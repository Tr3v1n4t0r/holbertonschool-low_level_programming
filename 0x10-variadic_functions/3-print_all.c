#include "variadic_functions.h"

/**
 *print_all - prints anything
 *
 *@format: a list of types of arguments passed
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	char *string;
	unsigned int a, i = 0;

	while (format)
	{
		va_start(valist, format);
		while(format[i])
		{
			a = 1;
			switch(format[i])
			{
			case 'c':
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%i", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				string = va_arg(valist, char *);
				if (!string)
					string = "(nil)";
				printf("%s", string);
				break;
			default:
				a = 0;
				break;
			}
			if (format[i + 1] && a)
				printf(", ");
			i++;
		}
		va_end(valist);
		break;
	}
	printf("\n");
}
