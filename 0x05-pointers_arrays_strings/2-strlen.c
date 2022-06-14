#include "main.h"

/**
 * _strlen - Determines the length of a given character string
 * @s: pointer variable to first character os the string
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
