#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 32;
			else
			{
				for (j = 0; sep[j]; j++)
				{
					if (*(s + i - 1) == sep[j])
					{
						*(s + i) -= 32;
						break;
					}
				}
			}
		}
	}
	return (s);
}
