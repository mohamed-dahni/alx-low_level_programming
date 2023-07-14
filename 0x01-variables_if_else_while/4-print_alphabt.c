#include <stdio.h>

/**
 * main - Entry point
 * Description: print the alphabet except q and e
 * Return: 0 (success)
 */
int main(void)
{
	int c, i;

	for (i = 0; i < 26; i++)
	{
		c = 'a' + i;
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');

	return (0);
}
