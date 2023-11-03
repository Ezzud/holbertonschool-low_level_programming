#include <ctype.h>
#include "main.h"
/**
 * _isupper - Main Entry
 * @c: Char we want to test
 * Return: If the char is uppercase
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
