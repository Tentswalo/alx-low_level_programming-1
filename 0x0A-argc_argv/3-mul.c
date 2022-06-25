#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Array of arguemnt strings
 *
 * Return: 0 if Success, 1 if error
 */

int main(int argc, char *argv[])
{
	int i;
	int a, b, result;

	i = argc;

	if (i == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;

		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}
