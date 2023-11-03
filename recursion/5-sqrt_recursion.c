#include "main.h"
/**
 * make_square - Give the square root
 * @n: Number
 * @c: The iterator
 * Return: The square of the number
 */
int make_square(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + make_square(n, c + 1));
}
/**
 * _sqrt_recursion - Main Entry
 * @n: The number
 * Return: The square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (make_square(n, 2));
}
