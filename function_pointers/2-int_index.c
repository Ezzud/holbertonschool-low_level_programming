#include "function_pointers.h"
/**
 * int_index - Main entry
 * @array: Array of int
 * @size: Array size
 * @cmp: Pointer to the function for comparing
 * Return: index of the first occurence from function.
 * Returns -1 if empty array of if error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
