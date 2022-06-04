#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int l_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	{
	int l_digit = n % 10;

	printf("Last digit of %d is", n);
	printf(" %d", l_digit);
	{
		if (l_digit > 5)
			printf(" and is greater than 5\n");
		else if (l_digit == 0)
			printf(" and is 0\n");
		else if (l_digit < 6 && !0)
			printf(" and is less than 6 and not 0\n");
		}
	}
	return (0);
}
