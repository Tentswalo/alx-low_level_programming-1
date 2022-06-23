#include "main.h"

/**
 * _strlen_recursion - Determines string length
 * @s: String whose length to check
 *
 * Return: Length of s
 */

int _strlen_recursion(char *s)
{
	int l = 0;
	
	if (*s != '\0')
	{
		_strlen_recursion(s);
		l++;
		return (l);
	}
}
