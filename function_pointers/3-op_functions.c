#include "3-calc.h"
/**
 * op_add - Addition
 * @a: Number
 * @b: Number
 * Return: Result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Substraction
 * @a: Number
 * @b: Number
 * Return: Result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplication
 * @a: Number
 * @b: Number
 * Return: Result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers.
 * @a: Number
 * @b: Number
 * Return: Result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Modulo
 * @a: Number
 * @b: Number
 * Return: Remainings of modulo
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
