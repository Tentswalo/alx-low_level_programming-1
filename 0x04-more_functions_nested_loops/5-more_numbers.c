#include "main.h"

/**
 * more_numbers - prints 1 to 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int n;
	int c;

	for (n = 1; n < 11; n++)
	{
		for (c = 0; c <= 14; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
