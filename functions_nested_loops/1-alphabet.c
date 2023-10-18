#include "main.h"

/**
 * print_alphabet - Main Entry
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');

    return (0);
}