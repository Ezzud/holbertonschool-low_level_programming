#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 'Z'; x >= 'A'; x--)
	{
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
