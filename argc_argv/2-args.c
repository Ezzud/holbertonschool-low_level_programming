#include <stdio.h>
/**
 * main - Main Entry
 * @argc: Number of args
 * @argv: Values of args
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
