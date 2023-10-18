#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - Main Entry
 * @c: Integer we want to test
 * Return: the last digit of the integer
 */
int print_last_digit(int c)
{
	int x;

	x = abs(c % 10);
	_putchar('0' + x);
	return (x);
}
