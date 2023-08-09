#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string
 * @str: string to copy
 * Return: duplicated string of str
 */
char *_strdup(char *str)
{
	char *dup_str = NULL;
	int i = 0,
		size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size++]);

	dup_str = (char *) malloc(sizeof(char) * size);
	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		dup_str[i] = str[i];
	dup_str[i] = '\0';


	return (dup_str);
}
