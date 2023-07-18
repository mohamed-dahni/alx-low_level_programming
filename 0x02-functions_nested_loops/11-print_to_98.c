#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to start from
 */
void print_to_98(int n)
{
	int i;
	printf("%d, ", n);
	for (i = 0; i < 98; i++)
	{
		printf("%d, ", i);
	}
	printf("98\n");
}
