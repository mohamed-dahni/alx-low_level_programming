#include <stdlib.h>

/**
 * string_nconcat - contatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to include from s2
 * Return: Pointer the new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str = NULL;
	unsigned int s1len = 0,
		s2len = 0,
		i     = 0,
		j     = 0;

	while (s1[s1len])
		s1len++;
	while (s2[s2len])
		s2len++;

	if (n >= s2len)
		n = s2len;

	str = (char *) malloc(sizeof(char) * (s1len + n + 1));
	if (str == NULL)
		return (NULL);

	while (i < s1len)
	{
		str[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';

	return (str);
}
