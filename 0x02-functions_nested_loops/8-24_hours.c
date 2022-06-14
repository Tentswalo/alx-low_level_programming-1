#include "main.h"

/**
 * jack_bauer - Prints every minute of jack_bauer starting from 00:00 to 23:59
 *
 * Return: Always void
 */

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = '0'; i <= '2'; i++)
	{
		for (j = '0'; j <= '3'; j++)
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
}
