#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to change
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 32;
	}
	return (s);
}
