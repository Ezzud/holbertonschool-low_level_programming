#include "main.h"

/**
 * _puts - Main entry
 * @str: The text
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}