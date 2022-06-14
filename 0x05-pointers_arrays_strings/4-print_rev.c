#include "main.h"

/**
 * print_rev - prints the reverse of a string onto stdout
 * @s: pointer variable
 *
 * Return: Nothing. Always void.
 */

void print_rev(char *s)
{
	int i;

	for (i = (*s - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
