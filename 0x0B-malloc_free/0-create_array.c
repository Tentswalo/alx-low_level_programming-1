#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array and initialises it to c
 * @size: Size of the array to be created
 * @c: character to initialise array
 *
 * Return: NULL if size is equal to 0 or if fail, else return pointer to array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return ("NULL");
	}
	else
	{
		unsigned int i;
		char *arr;

		arr = malloc(sizeof(char) * size);

		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				arr[i] = c;
			}

			return (arr);
		}

	}

}
