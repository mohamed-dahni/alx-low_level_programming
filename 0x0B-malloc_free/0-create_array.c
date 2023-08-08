#include <stdlib.h>
#include "main.h"

/**
 * create_arry - creates an array of chars of size size,
 * and initialize it with the c
 * @size: number of chars to create
 * @c: the character to initialize the arry
 * Reture: array
*/
char *create_array(unsigned int size, char c)
{
    char *arr = NULL;
    if (size <= 0) return NULL;

    arr = (char*) malloc(sizeof(char) * size);    
    if (arr == NULL)
    {
        return NULL;
    }

    return (arr);
}
