#include "main.h"

/**
 *void print_alphabet(void) - Prints alphabet in lower case
 *Decription: Prints alphabet using _putchar function
 *Return: Always 0 for success
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
