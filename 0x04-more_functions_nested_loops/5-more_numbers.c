#include "main.h"

/**
 * more_numbers - prints 1 to 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
			i++;
			_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
