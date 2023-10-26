#include "main.h"

/**
 * swap_int - Main Entry
 * @a: First int
 * @b: Second int
 */
void swap_int(int *a, int *b)
{
	int old = *a;
	*a = *b;
	*b = old;
}
