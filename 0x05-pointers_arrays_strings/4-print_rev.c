#include "main.h"

/**
 * print_rev - prints the reverse of a string onto stdout
 * @s: pointer variable
 *
 * Return: Nothing. Always void.
 */

void print_rev(char *s)
{
	if (*s)
	{
		print_rev(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
