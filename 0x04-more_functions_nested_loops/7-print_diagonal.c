#include "main.h"

/**
 * print_diagonal - Prints diagonal to stdout
 * @n: number of time \ is printed. Corresponds to no. of rows
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int j;
	int k;

	k = n - 1;

	if (n > 0)
	{
		for (i = 1; i <= k; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
