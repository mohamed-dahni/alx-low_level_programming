#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocates a 2 dimensional array of integers
 * @width: the with of the array
 * @height: the height of the array
 * Return: the 2 dimentional array, of or NULL in failier
*/
int **alloc_grid(int width, int height)
{
    int **arr = NULL;
    int i, j;

    if (width <= 0 || height <= 0)
        return (NULL);
    
    arr = (int **) malloc(sizeof(int) * height);
    if (arr == NULL)
        return (NULL);
    
    for (i = 0; i < height; i++)
    {
        arr[i] = (int *) malloc(sizeof(int) * width);
        if (arr[i] == NULL)
            return (NULL);
        
        for (j = 0; j < width; j++)
            arr[i][j] = 0;
    }

    return (arr);
}
