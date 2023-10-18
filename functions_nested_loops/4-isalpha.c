#include <ctype.h>
#include "main.h"
/**
 * _isalpha - Main Entry
 * @c: Integer we want to test
 * Return: A Integer
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
