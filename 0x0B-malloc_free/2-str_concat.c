#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: string 1 to be contatenated
 * @s2: sting 2 to be contatenated
 * Return: contatenated string
*/
char *str_concat(char *s1, char *s2)
{
	char *new_str = NULL;
	int i,
		s1_size = 0,
		s2_size = 0;

	if (s1 == NULL && s2 == NULL)
		return ("");

	while (s1 && s1[s1_size])
		s1_size++;
	while (s2 && s2[s2_size])
		s2_size++;

	new_str = (char *) malloc(sizeof(char) * (s1_size + s2_size + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < s1_size; i++)
		new_str[i] = s1[i];

	for (; i < (s1_size + s2_size); i++)
		new_str[i] = s2[i - s1_size];
	new_str[i] = '\0';

	return (new_str);
}
