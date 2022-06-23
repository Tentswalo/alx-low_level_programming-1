#include "main.h"

/**
 * is_prime_number - Checks if interger is a prime number
 * @n: integer to check
 *
 * Return: 1 if n is a prime number, otherwise returns 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (is_prime_number(n - 1));
	}
}
