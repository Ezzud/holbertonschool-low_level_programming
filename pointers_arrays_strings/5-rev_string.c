#include "main.h"

/**
 * rev_string - Main entry
 * @s: The text
 */
void rev_string(char *s)
{
	int length = 0;
	int index = 0;
	char tr;

	while (s[index++])
		length++;

	for (index = length - 1; index >= length / 2; index-=1)
	{
		tr = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = tr;
	}
}
