#include "main.h"
#include <stdlib.h>
/**
 * array_range - Create int array
 * @min: Min
 * @max: Max
 *
 * Return: Pointer to the array or null if there is an error
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	return (array);
}
