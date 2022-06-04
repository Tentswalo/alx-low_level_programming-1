#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'z'; 'a' <= ch; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
