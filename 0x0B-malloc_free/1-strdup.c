#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Determines string length
 * @str: String whose length to count
 *
 * Return: Length of string if success
 */

int _strlen(char *str)
{
	int size = 0;

	while (*(str + size) != '\0')
	{
		size++;
	}

	return (size);
}

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * whichcontains a copy if the string as a parameter
 *
 * @str: the string to duplicate
 * Return: Pointer to duplicated string on success,
 * NULL if inefficient memory was avaiable
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		char *nu_str = malloc((sizeof(char) * _strlen(str)) + 1);

		if (nu_str == NULL)
		{
			return (NULL);
		}
		else
		{
			int i;

			int j = _strlen(str) + 1;

			for (i = 0; i <= j; i++)
			{
				nu_str[i] = str[i];
			}
			nu_str[i] = '\0';
			
			return (nu_str);

		}
	}
	free(str);
}
