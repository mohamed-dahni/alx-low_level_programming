#include <stdio.h>

/**
 * main - Entry point
 * Description: print all possible combinations of two two-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 100; i++)
	{
		k = i / 10;
		l = i % 10;

		for (j = i + 1; j < 100; j++)
		{
			putchar('0' + k);
			putchar('0' + l);
			putchar(' ');
			putchar('0' + (j / 10));
			putchar('0' + (j % 10));

			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
