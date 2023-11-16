#include "variadic_functions.h"
/**
 * print_all - Main entry
 * @format: List of argument types
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j, c = 0;
	char *txt;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(valist, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(valist, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(valist, double)), c = 1;
				break;
			case 's':
				txt = va_arg(valist, char *), c = 1;
				if (!txt)
				{
					printf("(nil)");
					break;
				}
				printf("%s", txt);
				break;
		} i++;
	}
	printf("\n"), va_end(valist);
}
