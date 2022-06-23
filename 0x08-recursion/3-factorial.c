#include "main.h"

/**
 * factorial - Prints the factorial of a number
 * @n: The number whose factorial to print
 *
 * Return: Returns factorial if successm or -1 if n is less than 0
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
