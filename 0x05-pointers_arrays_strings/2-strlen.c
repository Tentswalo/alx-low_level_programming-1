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
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length = length + 1;
	}
	_putchar(length);
	_putchar('\n');

	return (0);
}
