#include "main.h"
/**
 * _memcpy - Main entry
 * @dest: Destination memory
 * @src: Source memory
 * @n: New bytes
 * Return: Pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
