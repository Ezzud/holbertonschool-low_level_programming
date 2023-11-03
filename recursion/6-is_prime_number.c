#include "main.h"
/**
 * check_if_prime - Check if number is prime
 * @n: The number
 * @c: The iterator
 * Return: If number is a prime number
 */
int check_if_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + check_if_prime(n, c + 1));
}
/**
 * is_prime_number - Main entry
 * @n: The number
 * Return: If number is prime
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (check_if_prime(n, 2));
}
