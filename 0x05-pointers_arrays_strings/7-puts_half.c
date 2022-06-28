#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: string to print
 *
 *Return: Nothing. Always void
 */

void puts_half(char *str)
{
	int length_of_the_string;
	int n;
	int m;
	int j;
	int k;

	length_of_the_string = 0;

	while (*(str + length_of_the_string) != '\0')
	{
		length_of_the_string++;
	}

	m = length_of_the_string % 2;

	if (m == 0)
	{
		n = (length_of_the_string / 2);

		for (j = n; j < length_of_the_string; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		n = ((length_of_the_string - 1) / 2) + 1;

		for (k = n; k < length_of_the_string; k++)
		{
			_putchar(str[k]);
		}

	}

	_putchar('\n');
}
