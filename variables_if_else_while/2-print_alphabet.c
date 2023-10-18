#include <stdio.h>
#include <ctype.h>

/**
 * print_alphabet - Entry point
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
