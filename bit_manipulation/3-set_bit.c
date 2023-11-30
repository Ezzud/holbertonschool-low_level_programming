#include "main.h"

/**
 * set_bit - Set a bit at a specific position
 * @n: Number to edit
 * @index: Position of the bit to change
 * Return: 1 if success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
