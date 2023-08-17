#include "function_pointers.h"

/**
 * print_name - print the return value of f function
 * @name: name to print
 * @f: pointer to the printing function
 * Return: Void
*/
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
	{
		return;
	}

	f(name);
}
