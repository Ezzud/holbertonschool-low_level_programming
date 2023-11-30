#include "main.h"

/**
 * clear_bit - Set the value of a bit
 * to 0
 * @n: Pointer to the number to clear
 * @index: Position of the bit to clear
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
