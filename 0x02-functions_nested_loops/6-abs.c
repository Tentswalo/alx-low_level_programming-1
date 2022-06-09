#include "main.h"

/**
 * _abs - computes absolute valuse of an integer
 * @x: The character to compute
 *
 * Return: Nothing
 */

int _abs(int x)
{
	int i = x * (-1);

	if (x < 0)
	{
		_putchar(i);
	}
	else if (x >= 0)
	{
		_putchar(i);
	}
	return (0);
}
