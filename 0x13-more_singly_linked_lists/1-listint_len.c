#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of nodes in a linked list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	int i = 0;

	temp = h;

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}

	return (i);
}
