#include "main.h"

/**
 * swap - swaps two characters
 * @a: first character
 * @b: second character
 * Return: void
 */
void swap(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

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
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int length = _strlen(s);
	int i = 0;

	while (i < length / 2)
	{
		swap(s + i, s + length - i - 1);
		i++;
	}
}
