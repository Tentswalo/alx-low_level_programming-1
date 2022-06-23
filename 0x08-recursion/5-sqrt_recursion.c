#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: interger whose square root is evaluated
 *
 * Return: square root of n on success, -1 if error
 */

int _sqrt_recursion(int n)
{
	if ((n < 0) || (n % 10 == 2) || (n % 10 == 3) || (n % 10 == 7) || (n % 8))
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (_sqrt_recursion(n * (n + 1)));
	}
}
