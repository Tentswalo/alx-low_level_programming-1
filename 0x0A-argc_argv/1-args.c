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
	
	(void)argv;
	
	i = argc - 1;

	printf("%d\n", i);
	return (0);
}
