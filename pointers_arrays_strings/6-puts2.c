#include "main.h"

/**
 * puts2 - Main Entry
 * @str: The text
 */
void puts2(char *str)
{
	int length = 0;
	int index = 0;

	while (str[index++])
		length++;

	for (index = 0; index < length; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
