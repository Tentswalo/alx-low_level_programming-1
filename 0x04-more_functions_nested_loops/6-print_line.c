#include "main.h"

/**
 * print_line - prints straight line from _ character
 * @n: number of times to print '_'
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	i = 1;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
	else
		_putchar('\n');
}
