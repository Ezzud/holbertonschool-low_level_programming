#include <ctype.h>
#include "main.h"
/**
 * _isdigit - Main Entry
 * @c: Value we want to test
 * Return: If the value is a digit number
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
