#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar\n";
	int i;

	for (i = 0; i < (int) strlen(text); i++)
		_putchar(text[i]);

	return (0);
}
