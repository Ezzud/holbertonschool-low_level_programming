#include "main.h"
/**
 * _strspn - Main Entry
 * @s: Initial text
 * @accept: Characters authorized
 * Return: Number of authorized chars
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int h;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		h = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				h = 0;
				break;
			}
		}
		if (h == 1)
			break;
	}
	return (i);
}
