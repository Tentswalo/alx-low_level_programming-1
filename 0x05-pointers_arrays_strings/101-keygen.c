#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @length: of password produced
 * Return: Always void
 */

int main(void)
{
	char characts[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz`~!@#$%^&*()_+-={}|[],.<>?:";
	int i;
	int length;

	length = 8;
	srand(time(NULL));

	for (i = 0; i < length; i++)
	{
	printf("%c", characts[rand() % (sizeof(characts) - 1)]);
	}
}
