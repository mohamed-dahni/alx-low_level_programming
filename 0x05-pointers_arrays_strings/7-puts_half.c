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
 * puts_half - prints the second half of the input string
 * @str: string to be printed
 * Return: void
*/
void puts_half(char *str)
{
	int str_length = _strlen(str);
	int str_half = str_length / 2;
	int i = (str_length % 2 == 0) ? (str_half + 1) : (str_half + 2);

	while (i < str_length)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
