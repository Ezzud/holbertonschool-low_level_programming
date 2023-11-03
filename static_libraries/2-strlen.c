#include "main.h"

/**
 * _strlen - Main entry
 * @s: String to count
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}
