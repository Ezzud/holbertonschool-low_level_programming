#include <ctype.h>
#include "main.h"
/**
 * _isupper - Main Entry
 * @c: Character we want to test
 * Return: If the character is uppercase
 */
int _isupper(char c)
{
	if (isupper(c))
		return (1);
	return (0);
}
