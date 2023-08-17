#include "function_pointers.h";

/**
 * print_name - print the return value of f function
 * @name: the string that will be pased to f function
 * @f: the function that will print the name in different ways
 * Return: Void
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
