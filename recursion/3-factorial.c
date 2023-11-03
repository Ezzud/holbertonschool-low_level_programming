#include "main.h"
/**
 * factorial - Main Entry
 * @n: The number
 * Return: FActorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
