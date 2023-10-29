#include "main.h"
/**
 * _strchr - Main entry
 * @s: The text
 * @c: The character
 * Return: The pointer of the first character of c
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for ( ; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
