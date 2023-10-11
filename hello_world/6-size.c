#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charV;
	int intV;
	long int lintV;
	long long int llintV;
	float floatV;
	printf("Size of a char: %lu byte(s)\n", (unsigned long int)sizeof(charV));
	printf("Size of an int: %lu byte(s)\n", (unsigned long int)sizeof(intV));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long int)sizeof(lintV));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long int)sizeof(llintV));
	printf("Size of a float: %lu byte(s)\n", (unsigned long int)sizeof(floatV));	

	return (0);
}
