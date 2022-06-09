#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: integer to start printing from
 *
 * Return: Returns nothing
 */

void print_to_98(int n)
{

	if (n > 98)
	{
		do {
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d,", n);
			n--;
		} while (n != 97);
	}
	else if (n < 98)
	{
		do {
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d,", n);
			n++;
		} while (n != 99);
	}
	else
		printf("98");

	putchar('\n');
}
