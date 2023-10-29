#include "main.h"
/**
 * _strpbrk - Main Entry
 * @s: First text
 * @accept: Second text
 * Return: Pointer of the number of occurences
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
