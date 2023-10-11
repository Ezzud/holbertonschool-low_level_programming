#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cV;
	int iV;
	long int liV;
	long long int lV;
	float fV;

	printf("Size of a char: %lu byte(s)\n", (unsigned long int)sizeof(cV));
	printf("Size of an int: %lu byte(s)\n", (unsigned long int)sizeof(iV));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long int)sizeof(liV));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lV));
	printf("Size of a float: %lu byte(s)\n", (unsigned long int)sizeof(fV));
	return (0);
}
