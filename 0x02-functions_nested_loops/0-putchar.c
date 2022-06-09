#include "main.h"

/**
 *main - Entry point
 *_putchar - Prints characters
 *Return: Always 0 for success
 */

int main(void)
{
	char p[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(i[p]);
	}

	_putchar('\n');

	return (0);
}
