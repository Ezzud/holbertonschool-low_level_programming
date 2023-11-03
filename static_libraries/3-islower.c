#include <ctype.h>
#include "main.h"
/**
 * _islower - Main Entry
 * @c: Integer we want to test
 * Return: A Integer
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
