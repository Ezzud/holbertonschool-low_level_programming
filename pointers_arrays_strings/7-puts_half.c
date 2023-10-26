#include "main.h"

/**
 * puts_half - Main Entry
 * @str: The text
 */
void puts_half(char *str)
{
	int length = 0;
	int index = 0;
	int i = 0;

	while (str[index++])
		length++;
	if ((length % 2) == 0)
		i = length / 2;
	else
		i = (length + 1) / 2;
	for (index = i; index < length; index++)
		_putchar(str[index]);
	_putchar('\n');
}
