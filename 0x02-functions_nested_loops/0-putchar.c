#include "main.h"

/**
 *main - Entry point
 *_putchar - Prints characters
 *Return: Always 0 for success
 */

int main(void)
{
	char p[9] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(p[i]);
	}
	
	return (0);
}
