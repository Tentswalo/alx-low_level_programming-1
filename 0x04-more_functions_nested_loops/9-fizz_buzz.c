#include <stdio.h>

/**
 * main - Entry point
 * Description: prints numbers 0 - 100. For multpiles of 3,
 * prints Fizz and for multiples of 5, prints Buzz instaed of number.
 * For multiples of both 3 & 5, prints FizzBuzz.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf(" ");
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf(" ");
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf(" ");
			printf("Fizz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" ");
			printf("%d", i);
		}
	}
	putchar('\n');

	return (0);
}
