#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be evaluated
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * puts2 - prints every other character of str
 * @str: string to be printed
 * Return: void
*/
void puts2(char *str)
{
	int str_length = _strlen(str);
	int i = 0;

	while (i < str_length)
	{
		_putchar(*(str + i));
		i += 2;
	}
}
