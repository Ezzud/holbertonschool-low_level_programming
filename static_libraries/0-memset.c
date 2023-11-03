#include "main.h"
/**
 * _memset - Main entry
 * @s: Memory name
 * @b: Byte
 * @n: New bytes
 * Return: Pointer to destination
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
