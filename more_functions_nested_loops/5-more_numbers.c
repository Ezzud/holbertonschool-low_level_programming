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
 * more_numbers - Main Entry
 * Return: Always 0
 */
void more_numbers(void)
{
	int h;
	int m;

	for (h = 0; h < 10; h++)
	{
		for (m = 0; m < 15; m++)
			print_int(m);
		_putchar('\n');
	}
}
