#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

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

	for (i = 1; i < argc; i++)
	{
		if ((isgigit(argv[i])) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else if ((isgigit(argv[i])) == 1)
		{
			a = atoi(argv[i]);
			b = a + atoi(argv[i]);
		}
	}
