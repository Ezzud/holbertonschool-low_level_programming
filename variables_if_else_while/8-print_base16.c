#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
	}
	for (x = 'A'; x <= 'F'; x++)
	{
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
