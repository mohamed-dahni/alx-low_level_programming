#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to compare
 * @s2: string to compare
 * Return: negative if s1 < s2, positive if s1 > s2, 0 if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; *(s1 + i) && *(s2 + i); i++)
	{
		if (*(s1 + i) != *(s2 + i))
			break;
	}
	return (*(s1 + i) - *(s2 + i));
}
