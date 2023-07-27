#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to append
 * @n: number of bytes to append
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i); i++)
		;
	for (j = 0; j < n && *(src + j); j++)
		*(dest + i + j) = *(src + j);
	*(dest + i + j) = '\0';
	return (dest);
}
