#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concantates a string
 * @dest: Destination string
 * @src:  Source string
 *
 * Return: pointer to resulting destination string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	
	for (i = 0; dest[i] != '\0'; i++);

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (0);
}
