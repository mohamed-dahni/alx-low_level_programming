#include <stdio.h>

/**
 * main - Entry point
 * Description: print lowercase alphabet in reverse
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar('z' - i);
	}
	putchar('\n');

	return (0);
}
