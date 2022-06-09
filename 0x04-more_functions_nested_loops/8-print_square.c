#include "main.h"

/**
 * print_square - prints square using '#' character
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int r;
	int c;

	if (size > 0)
	{
		for (r = 1; r <= size; r++)
		{
			for (c = 1; c <= size; c++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
