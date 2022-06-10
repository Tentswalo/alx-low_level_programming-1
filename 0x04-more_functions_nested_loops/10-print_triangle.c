#include "main.h"

/**
 * print_triangle - prints a tiriangle using # character
 * @size: denotes the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int l;
	int m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		{
			for (l = 1; l <= size; l++)
			{
				for (m = l; m < size; m++)
				{
					_putchar(' ');
				}
				for (m = 1; m <= l; m++)
				{
					_putchar('#');
				}
			_putchar('\n');
			}
		}
}
