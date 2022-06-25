#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Array of arguemnt strings
 *
 * Return: Always 0, Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
