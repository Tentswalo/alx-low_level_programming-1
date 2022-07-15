#include "lists.h"
#include <stdio.h>

/**
 * list_len - Determines the length of a linked list
 *@h: pointer to the head of linked list
 *
 * Return: Length
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t i = 0;

	temp = h;

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}

	return (i);
}
