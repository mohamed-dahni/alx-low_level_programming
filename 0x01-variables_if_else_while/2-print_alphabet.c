#include <stdio.h>

/**
 * main - Entry point
 * Description: print the alphabet in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	int c, i;

	for (i = 0; i < 26; i++)
	{
		c = 'a' + i;
		putchar(c);
	}
	putchar('\n');

	return (0);
}
