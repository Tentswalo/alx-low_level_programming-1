#include "main.h"

/**
 * print_last_digit - print last digit
 * @c: variable to analyse
 *
 * Return: On success 0
 */

int print_last_digit(int c)
{
	int i = c % 10;

	_putchar(i);
return (i);
}
