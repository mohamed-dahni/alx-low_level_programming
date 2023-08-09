#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array initialized with c
 * @size: number of chars to create
 * @c: the character to initialize the arry
 * Return: array of chars or NULL if something went wrong
 */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	arr = (char *) malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
