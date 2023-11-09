#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Main entry
 * @s1: First text
 * @s2: Second text
 * Return: Pointer of string with the 2 texts
 */
char *str_concat(char *s1, char *s2)
{
	char *output;
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int max;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	output = malloc(sizeof(char) * (i + j + 1));
	if (output == NULL)
	{
		free(output);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		output[k] = s1[k];
	max = j;
	for (j = 0; j <= max; k++, j++)
		output[k] = s2[j];

	return (output);
}
