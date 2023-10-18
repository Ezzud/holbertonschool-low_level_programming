#include <ctype.h>
#include "main.h"
/**
 * print_sign - Main Entry
 * @n: Integer we want to test
 * Return: An Integer
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n > 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0' + 0);
	return (0);
}
