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

	printf("Size of a char: %lu byte(s)\nSize of a int: %lu byte(s)\nSize of an long int: %lu byte(s)\nSize of a long long int: %lu byte(s)\nSize of a float: %lu byte(s)\n", (long unsigned int)sizeof(charV), (long unsigned int)sizeof(intV), (long unsigned int)sizeof(lintV), (long unsigned int)sizeof(llintV), (long unsigned int)sizeof(floatV));
	return (0);
}
