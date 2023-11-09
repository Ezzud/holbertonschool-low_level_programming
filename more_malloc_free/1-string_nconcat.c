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
	int s1_len;
	int s2_len;
	int i;
	int j;
	int k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = sizeof(s1);
	s2_len = sizeof(s2);

	output = malloc(sizeof(char) * (s1_len + s2_len));
	if (output == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		output[i] = s1[i];
	if (n >= s2_len)
		k = s2_len;
	else
		k = n;
	for (j = 0; j <= k; j++)
		output[j] = s2[j];
	return (output);
}