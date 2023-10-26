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
	int i = 0;

	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
	}
	return (dest);
}
