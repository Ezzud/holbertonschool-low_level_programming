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

	printf("Size of a char: %lu byte(s)\nSize of a int: %lu byte(s)\nSize of an long int: %lu byte(s)\nSize of a long long int: %lu byte(s)\nSize of a float: %lu byte(s)\n", sizeof(charV), sizeof(intV), sizeof(lintV), sizeof(llintV), sizeof(floatV);
	return (0);
}
