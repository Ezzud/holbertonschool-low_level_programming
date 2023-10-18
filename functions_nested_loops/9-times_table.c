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
 * times_table - Main Entry
 * Description: Print the table of 9
 */
void times_table(void)
{
	int h;
	int m;

	for (h = 0; h < 10; h++)
	{
		for (m = 0; m < 10; m++)
		{
			if (((h * m) < 10) && m != 0)
				_putchar(' ');
			print_int(h * m);
			if (m != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
