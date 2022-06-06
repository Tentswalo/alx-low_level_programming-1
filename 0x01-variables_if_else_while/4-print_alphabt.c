#include <stdio.h>

/**
 * main - Entry point
 * for: prints letters a-z
 * if: excludes letters e & q
 * putchar: prints output
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
