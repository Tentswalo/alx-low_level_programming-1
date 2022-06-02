#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("Size of a char: %lu bytes(s)\n", (unsigned int)sizeof(c));
	printf("Size of an int: %lu bytes(s)\n", (unsigned int)sizeof(i));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned int)sizeof(l));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned int)sizeof(ll));
	printf("Size of a float: %lu bytes(s)\n", (unsigned int)sizeof(f));
	return (0);
}
