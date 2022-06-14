#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @i: Number whose last digit to print
 *
 * Return: value of last digit (success)
 */

int print_last_digit(int i)
{
	int last_d;

	if (i >= 0)
	{
		last_d = i % 10;
	}
	else if (i < 0)
	{
		i *= (-1);
		last_d = i % 10;
	}
	_putchar(last_d + '0');

	return (last_d);
}
