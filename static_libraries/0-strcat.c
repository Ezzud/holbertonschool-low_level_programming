#include "main.h"
/**
 * _strcat - Main Entry
 * @dest: Destination
 * @src: The original string
 * Return: Pointer to destination
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;
	int sec_count = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (sec_count >= 0)
	{
		*(dest + count) = *(src + sec_count);
		if (*(src + sec_count) == '\0')
			break;
		count++;
		sec_count++;
	}
	return (dest);
}
