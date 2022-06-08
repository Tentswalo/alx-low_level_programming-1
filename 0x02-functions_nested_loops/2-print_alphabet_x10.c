#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: Prints alphabet ten times using _putchar function
 * Return: Returns nothing
 */

void print_alphabet_x10(void)
{
	int p;
	int q;

	for (p = 0; p <= 10; p++)
	{
		for (q = 'a'; q <= 'z'; q++)
		{
			_putchar(q);
		}
	}

	_putchar('\n');
}
