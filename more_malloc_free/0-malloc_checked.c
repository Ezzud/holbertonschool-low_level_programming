#include "main.h"
/*
* malloc_checked - Check a memory allocation
* @b: Size
* Return: pointer to the allocation memory
*/
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a != NULL)
		return (a);
	exit (98);
}