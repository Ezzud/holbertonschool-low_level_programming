#include "main.h"
/**
 * flip_bits - Get number of bits
 * needed to flip to get from
 * a number to another
 *
 * @n: First Number to check
 * @m: Second number to check
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	for (; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			count++;
	}
	return (count);
}
