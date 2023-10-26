#include "main.h"

/**
 * _strcpy - Main Entry
 * @dest: Where the string is being copied
 * @src: Source of the string
 *
 * Return: Pointer of new text
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}