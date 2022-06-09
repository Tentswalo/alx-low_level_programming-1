#include "main.h"

/**
 * _isupper - Checks to see if character is upper case
 * @c: The character to check
 *
 * Return: Returns 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
