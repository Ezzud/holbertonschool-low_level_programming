#include "function_pointers.h"
/**
 * print_name - Main entry
 * @name: Name
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
