#include <stdlib.h>

/**
 * malloc_checked - allocates memory and checks for failure
 * @b: number of bytes to allocate
 * Return: Void pointer to the allocated space
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = (void *) malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
