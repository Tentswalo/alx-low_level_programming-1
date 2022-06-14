#include "main.h"

/**
 * _strlen - Determines the length of a given character string
 * @s: pointer variable to first character os the string
 *
 * Return: string length (Success)
 */

int _strlen(char *s)
{

	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}

	return (length);
}
