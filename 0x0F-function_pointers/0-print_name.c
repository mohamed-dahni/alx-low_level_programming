#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print the return value of f function
 * @name: name to print
 * @f: pointer to the printing function
 * Return: Void
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		exit(1);

	f(name);
}
