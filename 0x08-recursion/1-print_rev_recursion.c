#include "main.h"

/**
 *  _print_rev_recursion- Prints a string n reverse to stdout
 * @s: Pointer to character on string
 *
 * Return: Nothing, always void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		s++;
		_putchar(*s);
	}
	else
		_putchar('\n');
}
