#include "main.h"

/**
 * swap_int - Swaps the values of two integers given their pointers
 * @a: First integr to swap
 * @b: Second integer to swap
 *
 * Return: Nothing. Void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;

	*a = *b;
	*b = i;
}
