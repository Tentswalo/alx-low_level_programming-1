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
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	
	if (i == 3)
	{
		printf("%d\n", result);
		return (0);
	}
	else if ((i == 1) || (i == 2))
	{
		printf("Error\n");
		return (1);
	}
	return (0);

}
