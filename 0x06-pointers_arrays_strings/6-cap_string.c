#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *leet(char *s)
{
	int i, j;
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(letters + j); j++)
		{
			if (*(s + i) == *(letters + j))
				*(s + i) = *(numbers + j);
		}
	}
	return (s);
}
