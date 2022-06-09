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
		if (i % 3 == 0 && i % 3 != i % 5)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0 && i % 5 != i % 3)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	putchar('\n');

	return (0);
}
