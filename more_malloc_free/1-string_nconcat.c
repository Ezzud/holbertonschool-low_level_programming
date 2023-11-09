#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: First text
 * @s2: Second text
 * @n: Max length of s2
 * Return: pointer to the allocation memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *output;
	unsigned int o_size;
	unsigned int s1_len;
	unsigned int s2_len;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;

	if (n > s2_len)
		n = s2_len;
	o_size = s1_len + n;

	output = malloc(sizeof(char) * o_size);
	if (output == NULL)
		return (NULL);
	for (i = 0; i < o_size; i++)
	{
		if (i < s1_len)
			output[i] = s1[i];
		else
			output[i] = s2[i - s1_len];
	}
	return (output);
}
