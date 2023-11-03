#include "main.h"
/**
 * _pow_recursion - Main entry
 * @x: Number of the base
 * @y: Exponential Number
 * Return: Result of the exponential
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
