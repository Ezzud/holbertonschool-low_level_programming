#include "main.h"
/**
 * _strncpy - Main Entry
 * @dest: Destination
 * @src: The original string
 * @n: Amount of byte of src
 * Return: Pointer to the destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
