#include "variadic_functions.h"
/**
 * print_strings - Print text
 * @separator: Separator for each string
 * @n: Number of string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *txt;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		txt = va_arg(valist, char *);
		if (txt)
			printf("%s", txt);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
