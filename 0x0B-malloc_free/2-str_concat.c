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
 * str_concat - Concatenates two strings
 * @s1: First string to concetenates
 * @s2: String to concetenate into s1
 *
 *Return: pointer to concantenated s1, NULL if failure
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 != NULL)
	{
		int nu_len = _strlen(s1) + _strlen(s2);
		char *nu_str = malloc((sizeof(char) * nu_len) + 1);

		if (nu_str != NULL)
		{
			int j;
			int i = 0;

			for (i = 0; i <= _strlen(s1); i++)
			{
				nu_str[i] = s1[i];
			}
			for (j = (_strlen(s1) + 1); j <= nu_len; j++)
			{
				nu_str[j] = s2[i];
				i++;
			}
			nu_str[j] = '\0';
			return (nu_str);
		}
		else if (nu_str == NULL)
		{
			return (NULL);
		}
	}
	else
	{
		int i;
		int nu_len = _strlen(s2);
		char *nu_str = malloc((sizeof(char) * nu_len) + 1);

		for (i = 0; i <= nu_len; i++)
		{
			nu_str[i] = s2[i];
		}
		nu_str[i] = '\0';
		return (nu_str);
	}
}
