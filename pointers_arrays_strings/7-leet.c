#include "main.h"
/**
 * leet - Main Entry
 * @s: The text
 * Return: Pointer to destination
 */

char *leet(char *s)
{
	int count = 0;
	int i;
	int lower_letters[] = {97, 101, 111, 116, 108};
	int upper_letters[] = {65, 69, 79, 84, 76};
	int encoding_number[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lower_letters[i] || *(s + count) == upper_letters[i])
			{
				*(s + count) = encoding_number[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
