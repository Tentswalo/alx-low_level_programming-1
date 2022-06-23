#include "main.h"

/**
 * _pow_recursion - Returns the value of x to the power y
 * @x: Base integer
 * @y: Power integer
 *
 * Return: X**y if success, or -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, (y - 1)));
}
