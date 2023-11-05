#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Main entry
 * @argc: Number of args
 * @argv: Values of args
 * Return: 0 (Success) 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
