#include "main.h"
#include <stdio.h>

/**
 * print_array - Main Entry
 * @a: Array of int
 * @n: Number of int
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index == n - 1)
			continue;
		printf(", ");
	}

	printf("\n");
}