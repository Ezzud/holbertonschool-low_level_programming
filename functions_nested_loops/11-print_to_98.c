#include <stdlib.h>
#include "main.h"

/**
 * print_int - Main Entry
 * Description: Print a int with putchar
 * @n: Integer used for print
 * Return: Always 0 (Success)
 */
int print_int(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_int(n / 10);
	_putchar(n % 10 + '0');
	return (0);
}

/**
 * print_to_98 - Main Entry
 * @n: Integer we want to start with
 */
void print_to_98(int n)
{
	int x;

	if (n < 99)
	{
		for (x = n; x < 99; x++)
		{
			print_int(x);
			if (x != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	} else
	{
		for (x = n; x > 97; x--)
		{
			print_int(x);
			if (x != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
