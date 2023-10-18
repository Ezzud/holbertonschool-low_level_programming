#include "main.h"

/**
 * print_alphabet_x10 - Main Entry
 *
 * Return: Always 0 (Success)
 */
int print_alphabet_x10(void)
{
	int x;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
	return (0);
}
