#include <stdio.h>
#include "main.h"

/**
 * print_array - prints given number of elements of a string
 * @a: string to print
 * @n: number of elements to print
 *
 * Return: Nothing, always void
 */

void print_array(int *a, int n)
{
	int i;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}

	printf("%d", a[n]);
	printf("\n");
}
