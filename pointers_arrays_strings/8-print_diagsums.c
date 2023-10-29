#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Main Entry
 * @a: Pointer of the sum
 * @size: Matrix size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int first_sum = 0;
	int second_sum = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			first_sum += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			second_sum += *(a + i);
	}
	printf("%d, %d\n", first_sum, second_sum);
}
