#include "main.h"

/**
 * jack_bauer - Prints every minute of jack_bauer starting from 00:00 to 23:59
 * Return: Always void
 */

void jack_bauer(void)
{
	int a, b, c, d, i, j, k, l;

	for (i = '0'; i <= '2'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '5'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
	for (b = '0'; b <= '3'; b++)
	{
		for (c = '0'; c <= '5'; c++)
		{
			for (d = '0'; d <= '9'; d++)
			{
				a = '2';

				_putchar(a);
				_putchar(b);
				_putchar(':');
				_putchar(c);
				_putchar(d);
				_putchar('\n');
			}
		}
	}
}
