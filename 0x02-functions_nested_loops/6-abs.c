#include "main.h"

/**
 * _abs - computes absolute valuse of an integer
 * @x: The character to compute
 *
 * Return: Nothing
 */

int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (x * -1);
	return (0);
}
