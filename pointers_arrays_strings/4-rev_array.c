#include "main.h"
/**
 * reverse_array - Main Entry
 * @a: The array
 * @n: Size of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int t;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			t = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = t;
		}
	}
}
