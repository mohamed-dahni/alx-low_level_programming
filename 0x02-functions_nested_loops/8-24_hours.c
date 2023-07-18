#include "main.h"

/**
 * print_num - prints a number
 * @n: number to print
 */
void print_num(int n)
{
	int last_digit = 0;
	int first_digit = 0;

	if (n > 9)
	{
		last_digit = n % 10;
		first_digit = (n - last_digit) / 10;
	} else
	{
		last_digit = n;
	}

	_putchar(first_digit + '0');
	_putchar(last_digit + '0');
}

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int h, m;;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			/* hours */
			print_num(h);
			
			/* colon */
			_putchar(':');

			/* minuts */
			print_num(m);	
			
			/* newline */
			_putchar('\n');
		}
	}
}
