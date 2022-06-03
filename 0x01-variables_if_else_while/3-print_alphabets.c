#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putcher(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		puthchar(ch);
	return (0);
}
