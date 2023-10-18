#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * print_int - Main Entry
 * Description: Print a int with putchar
 * @n: Integer used for print
 * Return: Always 0 (Success)
 */
int print_int(int n)
{
	if (n / 10)
		print_int(n / 10);
	_putchar(n % 10 + '0');
	return (0);
}
/**
 * jack_bauer - Main Entry
 * Description: Print all minutes of a day
 * Return: Always 0
 */
int jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
				_putchar('0' + 0);
			print_int(h);
			_putchar(':');
			if (m < 10)
				_putchar('0' + 0);
			print_int(m);
			_putchar('\n');
		}
	}
	return (0);
}
