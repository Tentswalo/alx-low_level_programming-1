#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: The string to print
 *
 * Return: Nothing. Always void.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i <= *str - 1; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
