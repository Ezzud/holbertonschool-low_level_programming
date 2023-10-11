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

	printf("Size of a char: %lu byte(s)\nSize of an int: %lu byte(s)\nSize of a long int: %lu byte(s)\nSize of a long long int: %lu byte(s)\nSize of a float: %lu byte(s)\n", (unsigned long int)sizeof(charV), (unsigned long int)sizeof(intV), (unsigned long int)sizeof(lintV), (unsigned long int)sizeof(llintV), (unsigned long int)sizeof(floatV));
	return (0);
}
