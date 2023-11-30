#include "main.h"
/**
 * binary_to_uint - Convert binary number
 * to an unsigned int
 * @b: String containing the binary number
 * Return: The converted int, or 0 if string
 * contains something else than 0 & 1, or if
 * the string is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	int str_len = 0, x;

	if (!b)
		return (0);

	while (b[str_len] != '\0')
		str_len++;

	for (str_len--, x = 1; str_len >= 0; str_len--, x *= 2)
	{
		if (b[str_len] != '0' && b[str_len] != '1')
			return (0);

		if (b[str_len] & 1)
			r += x;
	}
	return (r);
}
