#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: integer to start printing from
 *
 * Return: On success 0
 */

void print_to_98(int n)
{

	if (n >= 0 && n < 98)
	{
		for (; n <= 98; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
