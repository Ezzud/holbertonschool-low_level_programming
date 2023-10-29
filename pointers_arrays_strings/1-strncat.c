#include "main.h"
/**
 * _strncat - Main Entry
 * @dest: Destination
 * @src: The original string
 * @n: Max number of bytes before not null terminated
 * Return: Pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0; 
	int sec_count = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (sec_count < n)
	{
		*(dest + count) = *(src + sec_count);
		if (*(src + sec_count) == '\0')
			break;
		count++;
		sec_count++;
	}
	return (dest);
}
