#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	while (length--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
