#include "main.h"

/**
 * _strlen - Main entry
 * @str: String to count
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
